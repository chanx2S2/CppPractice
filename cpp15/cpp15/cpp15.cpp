// 1. Linked list with classes [Normal]

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
	l.append(10).append(20).append(30).append(40);
	l.next().next();
	cout << l.get() << endl; // print out 30
    l.info(); // print out 'length: 4, current: 2 (or 3 depending on your start index)'
	l.rewind();
	cout << l.get() << endl; // print out 10 

}