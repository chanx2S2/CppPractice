/*

// 1. Upgrade the Linked list class [Normal]

#include <iostream>
using namespace std;

class my_list {
private:
    struct Node {
        int value;
        Node* next;
    };

    Node* head;
    Node* current;
    int length;

public:
    my_list() : head(nullptr), current(nullptr), length(0) {}

    my_list& append(int value) {
        Node* n = new Node{ value, nullptr };

        if (head == nullptr) {
            head = n;
            current = head;
        }
        else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = n;
        }

        length++;
        return *this;
    }

    my_list& next() {
        if (current != nullptr && current->next != nullptr) {
            current = current->next;
        }
        return *this;
    }

    int get() const {
        return (current != nullptr) ? current->value : -1;
    }

    my_list& rewind() {
        current = head;
        return *this;
    }

    void info() const {
        cout << "length: " << length << ", current: " << ((current != nullptr) ? currentPosition() : 0) << endl;
    }

    my_list& operator +(int value) {
        return append(value);
    }

    my_list& operator +(const my_list& other) {
        Node* temp = other.head;

        while (temp != nullptr) {
            append(temp->value);
            temp = temp->next;
        }

        return *this;
    }

    my_list& operator -(int n) {
        if (n <= 0 || n > length) {
            return *this;
        }

        Node* temp = head;

        if (n == 1) {
            head = head->next;
        }
        else {
            for (int i = 1; i < n - 1; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }

        length--;
        return *this;
    }

private:
    int currentPosition() const {
        Node* temp = head;
        int position = 1;
        while (temp != current) {
            temp = temp->next;
            position++;
        }
        return position;
    }
};

int main()
{
    my_list l;
    my_list ll;

    l.append(10).append(20).append(30).append(40);
    l.next().next();
    cout << l.get() << endl; // print out 30

    ll = ll + 100 + 200 + 300; // append values 100, 200 and 300 to ll.
    ll.next();
    cout << ll.get() << endl; // print out 200

    ll = ll + l; // concatenate the list 'l' to the list 'll';
    // The list 'll' would be '[100][200][300][10][20][30][40]'
    //                   index:   0    1    2   3   4   5   6
    // ll.printall();
    ll.next().next().next();
    cout << ll.get() << endl; // print out 20

    ll = ll - 5; // remove the 5-th node.
    ll.next();
    cout << ll.get() << endl; // print out 40, not 30. 
    // ll.printall();

}

*/

// 2. New linked list [Normal]

#include <iostream>
#include <string>
using namespace std;

struct node {
    int data;
    node* next;
    int index;

    node(int d, node* n, int i): data(d), next(n), index(i) {}
};

class slist {
private:
    node* head;
    node* current;
    int index;

public:
    slist(): head(0), current(0), index(0) {}
    void push_front(const int &d) { head = new node(d, head, index++); }
    void push_back (const int &d) {
        if (!head) {
            head = new node(d, nullptr, index++);
            current = head;
        }
        else {
            node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = new node(d, nullptr, index++);
        }
    }

    slist& next() {
        if (!current) current = head;
        else current = current->next;

        return *this;
    }

    int get() {
        return current->data;
    }

    int operator[](int i) {
        node* s = head;

        for (s = head; s->index != i; s->next);

        return s->data;
    }
};

int main()
{
    slist s;
    s.push_front(10);
    s.push_front(20);
    s.push_front(30);
    s.push_back(40);

    s.next();
    cout << s.get() << endl;
    s.next();
    cout << s.get() << endl;
    s.next();
    cout << s.get() << endl;
    s.next();
    cout << s.get() << endl;

}