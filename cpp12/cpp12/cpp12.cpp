// 1. mystrcat [Easy]

#include <iostream>
using namespace std;

char* mystrcat(const char* str1, const char* str2);

char* mystrcat(const char* str1, const char* str2) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    char* result = new char[length1 + length2 + 1];

    strcpy(result, str1);
    strcat(result, str2);

    return result;
}

int main()
{
    char* str = mystrcat("Hello!", "World!");
    cout << str << endl;
}

/*

// 2. Reverse linked list [Normal]

#include <iostream>
using namespace std;

template <typename T>
struct list {
    T value;
    list* next;
};

template <typename T>
list<T>* append(T value) {
    list<T>* n = new(list<T>);
    n->value = value;
    n->next = NULL;

    return n;
}

template <typename T>
list<T>* append(list<T> *tail, T value) {
    list<T>* n = new(list<T>);
    n->value = value;
    n->next = NULL;

    tail = tail->next = n;

    return tail;
}

template <typename T>
list<T>* reverse(list<T>* head) {
    list<T>* prev = NULL;
    list<T>* current = head;
    list<T>* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
    return head;
}

int main()
{
    
    list<int>* head;
    list<int>* loop;
    list<int>* tail;
    list<int>* r_head;

    tail = head = append(10);
    tail = append(tail, 20);
    tail = append(tail, 30);
    tail = append(tail, 40);

    for (loop = head; loop != NULL; loop = loop->next) {
        cout << loop->value << endl;
    }

    r_head = reverse(head);
    cout << "Reversed" << endl;

    for (loop = r_head; loop != NULL; loop = loop->next) {
        cout << loop->value << endl;
    }
}

*/