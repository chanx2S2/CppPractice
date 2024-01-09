// 1. Queue version 2

#include <iostream>
#include <vector>

using namespace std;

class my_queue : private vector<int> {

public:

	void enqueue(int value) {
		insert(begin(), value);
	}

	void dequeue() {
		if (!empty()) { pop_back(); }
	}

	int peek() const {
		if (!empty()) { return back(); }
	}

};



int main()

{

	my_queue q;



	q.enqueue(10);

	q.enqueue(20);

	q.enqueue(30);

	q.enqueue(40);



	cout << q.peek() << endl; // 10

	q.dequeue();

	cout << q.peek() << endl; // 20

	q.dequeue();

	cout << q.peek() << endl; // 30

	q.dequeue();

	cout << q.peek() << endl; // 40

	q.dequeue();

}