/*

// 1. Calculator with a class [Easy]

#include <iostream>

using namespace std;

class my_calc {
private:
    int a;
    int b;
    int result;

public:
    my_calc(int num1, int num2) : a(num1), b(num2) {}

    int add() {
        result = a + b;
        return result;
    }

    int sub() {
        result = a - b;
        return result;
    }

    int mul() {
        result = a * b;
        return result;
    }

    int div() {
        if (b == 0) {
            return NULL;
        }
        else {
            result = a / b;
            return result;
        }
    }

};

int main()
{
    my_calc c(10, 20);

    cout << c.add() << endl;
    cout << c.sub() << endl;
    cout << c.mul() << endl;
    cout << c.div() << endl;
}

*/

// 2. Queue [Normal]

#include <iostream>

using namespace std;

class my_queue {
private:
    int queue[16];
    int front;
    int rear;
public:
    my_queue();
    void Enqueue(int value);
    int Dequeue();
    int Peek();
};

my_queue::my_queue() :front(0), rear(0) {}
void my_queue::Enqueue(int value) {
    if ((rear + 1) % 16 == front) {
        // 큐가 가득 찼을 경우 에러 처리
        cout << "Queue is full. Cannot enqueue." << endl;
        return;
    }

    queue[rear] = value;
    rear = (rear + 1) % 16;
}
int my_queue::Dequeue() {
    if (front == rear) {
        // 큐가 비어있을 경우 에러 처리
        cout << "Queue is empty. Cannot dequeue." << endl;
        return -1;
    }

    int value = queue[front];
    front = (front + 1) % 16;
    return value;
}
int my_queue::Peek() {
    if (front == rear) {
        // 큐가 비어있을 경우 에러 처리
        cout << "Queue is empty. Cannot peek." << endl;
        return -1;
    }

    return queue[front];
}

int main()
{
    my_queue q;

    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);

    cout << "Peek: " << q.Peek() << endl;
    cout << "Dequeue: " << q.Dequeue() << endl;
    cout << "Dequeue: " << q.Dequeue() << endl;
    cout << "Dequeue: " << q.Dequeue() << endl;
    cout << "Peek: " << q.Peek() << endl;

    q.Enqueue(40);
    cout << "Peek: " << q.Peek() << endl;
    cout << "Dequeue: " << q.Dequeue() << endl;
}