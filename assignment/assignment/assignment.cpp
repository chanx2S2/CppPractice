#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

class node {
protected:
    string name; // state node name

    bool transited; // for synchronization
    bool state; // 0: deactivated, 1: activated
    bool isTerminal; // 0: terminal, 1: non-terminal

    char match; // target character for matching

    vector<node*> next; // next link 

public:
    void init(const string& _name, bool _isTerminal, char _match) {
        name = _name;

        isTerminal = _isTerminal;
        match = _match;

        state = transited = 0;
    }

    void addNode(node* _next) {
        next.push_back(_next);
    }

    // for synchronization
    node& transition() {
        transited = 1;
        return *this;
    }

    void activation() {
        state = transited;
        transited = 0;
    }

    void input(const char& ch) {
        if (state && (match == ch)) {
            if (isTerminal) {
                cout << "  >>>> accepted by " << name << endl;
            }

            for (int i = 0; i < next.size(); i++) {
                next[i]->transition();
            }
        }
        state = 0; // deactivate this node after matching
    }
};

class regexNode : public node {
public:
    void init(const string& _name, char _match) {
        name = _name;
        isTerminal = true; // 정규 표현식에서는 항상 종단 노드
        match = _match;
        state = transited = 0;
    }
};

vector<node> parseRegex(const string& regex) {
    vector<node> nodes;
    stack<node*> nodeStack;
    int regexLength = regex.length();

    for (int i = 0; i < regexLength; i++) {
        char currentChar = regex[i];

        switch (currentChar) {
        case '.':
        {
            regexNode* anyCharNode = new regexNode();
            anyCharNode->init("AnyChar", '.');
            nodes.push_back(*anyCharNode);

            if (!nodeStack.empty()) {
                node* topNode = nodeStack.top();
                nodeStack.pop();
                anyCharNode->addNode(topNode);
                nodeStack.push(anyCharNode);
            }
            else {
                nodeStack.push(anyCharNode);
            }
        }
        break;
        case '*':
        {
            if (!nodeStack.empty()) {
                node* topNode = nodeStack.top();
                nodeStack.pop();

                node* repeatNode = new node();
                repeatNode->init("Repeat", true, '\0');
                repeatNode->addNode(topNode);
                nodeStack.push(repeatNode);
            }
        }
        break;
        case '+':
        {
            if (!nodeStack.empty()) {
                node* topNode = nodeStack.top();
                nodeStack.pop();

                node* repeatNode = new node();
                repeatNode->init("Repeat", true, '\0');
                repeatNode->addNode(topNode);
                nodeStack.push(repeatNode);
            }
        }
        break;
        case '{':
        {
            int j = i + 1;
            while (j < regexLength && regex[j] != '}') {
                j++;
            }
            int commaPos = regex.find(',', i);
            int m = stoi(regex.substr(i + 1, commaPos - i - 1));
            int n = stoi(regex.substr(commaPos + 1, j - commaPos - 1));

            if (!nodeStack.empty()) {
                node* topNode = nodeStack.top();
                nodeStack.pop();

                node* repeatNode = new node();
                repeatNode->init("Repeat", true, '\0');

                for (int k = 0; k < m - 1; k++) {
                    node* copyNode = new node(*topNode);
                    nodes.push_back(*copyNode);
                    repeatNode->addNode(copyNode);
                }

                for (int k = 0; k < n - m + 1; k++) {
                    node* emptyNode = new node();
                    nodes.push_back(*emptyNode);
                    repeatNode->addNode(emptyNode);
                }

                nodeStack.push(repeatNode);
            }

            i = j; // skip the characters inside {}
        }
        break;
        case '|':
        {
            if (nodeStack.size() >= 2) {
                node* second = nodeStack.top();
                nodeStack.pop();
                node* first = nodeStack.top();
                nodeStack.pop();

                node* orNode = new node();
                orNode->init("Or", true, '\0');
                orNode->addNode(first);
                orNode->addNode(second);

                nodeStack.push(orNode);
            }
        }
        break;
        default:
        {
            regexNode* newNode = new regexNode();
            newNode->init(string(1, currentChar), currentChar);
            nodes.push_back(*newNode);
            nodeStack.push(newNode);
        }
        }
    }

    return nodes;
}

void test(vector<node>& s, const string& str) {
    cout << "test for '" << str << "'" << endl;

    for (int i = 0; i < str.length(); i++) {
        cout << "  >> input " << str[i] << endl;

        // epsilon activation for s0
        s[0].transition().activation();

        // give ch all nodes
        for (int j = 0; j < s.size(); j++)
            s[j].input(str[i]);

        // determine transited state
        for (int j = 0; j < s.size(); j++)
            s[j].activation();
        
    }
    cout << endl;

}

int main() {
    // 정규 표현식을 나타내는 문자열
    string regexPattern = "abc|ade";

    // 정규 표현식을 파싱하여 노드들을 생성
    vector<node> regexNodes = parseRegex(regexPattern);

    // 테스트할 문자열
    string testString = "abc";

    // 정규 표현식에 대한 테스트 수행
    test(regexNodes, testString);

    return 0;
}
