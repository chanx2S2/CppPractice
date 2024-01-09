
/*

// 1. More advanced calculator [Easy]

#include <iostream>

using namespace std;

char c;

template <typename T1>
T1 add(T1 a, T1 b) {
    return a + b;
}

template <typename T2>
T2 sub(T2 a, T2 b) {
    return a - b;
}

template <typename T3>
T3 mul(T3 a, T3 b) {
    return a * b;
}

template <typename T4>
T4 div(T4 a, T4 b) {
    return a / b;
}

template <typename T>
void numInput() {

    T a, b;

    cout << "Input two number: ";
    cin >> a;
    cin >> b;

    cout << "Answer: ";

    if (c == '+') cout << add<T>(a, b);
    else if (c == '-') cout << sub<T>(a, b);
    else if (c == '*') cout << mul<T>(a, b);
    else if (c == '/') {
        if (b == 0) cout << "0으로는 나눌 수 없습니다.";
        else cout << div<T>(a, b);
    }

}

void opInput() {
    
    cout << "--------------" << endl;
    cout << "+ : add" << endl;
    cout << "- : subtract" << endl;
    cout << "* : multiply" << endl;
    cout << "/ : divide" << endl;
    cout << "Q : quit" << endl;
    cout << "---------------" << endl;
    
    cout << "Select an operator: ";
    cin >> c;

    if (c == 'q' || c == 'Q') cout << "종료합니다..." << endl;
    else numInput<double>();

}

int main()
{
    
    opInput();

    return 0;
}

// 2. Quadrant two [Easy]

#include <iostream>
#include <cmath>

using namespace std;

void dist_2d() {

    int x1, y1;
    int x2, y2;

    cout << "input x1, y1: ";
    cin >> x1;
    cin >> y1;

    cout << "input x2, y2: ";
    cin >> x2;
    cin >> y2;

    cout << "Distance: " << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << endl;

}

int main()
{
   
    dist_2d();

    return 0;
}

// 3. Digits three [Normal]

#include <iostream>

using namespace std;

void separate() {

    string num;
    string mum;

    cout << "input number: ";
    cin >> num;

    int l = num.length();

    for (int i = 0; i < l; i++) {

        if ((l) % 3 == 0) {
            if ((i + 1) % 3 == 0 && i < (l - 1)) {
                cout << num[i];
                cout << ",";
            }
            else cout << num[i];
        }

        else if ((l - 1) % 3 == 0) {
            if ((i) % 3 == 0 && i < (l - 3)) {
                cout << num[i];
                cout << ",";
            }
            else cout << num[i];
        }

        else {
            if ((i + 2) % 3 == 0 && i < (l - 2)) {
                cout << num[i];
                cout << ",";
            }
            else cout << num[i];
        }
    }

}

int main()
{
    separate();

    return 0;
}

*/

// 4. Tower of Hanoi [Hard. Bonus problem. You can remain this problem blank]

#include <iostream>

using namespace std;

void hanoi(int n, char from, char via, char to) {
    if (n == 1) cout << "Moved the disk " << n  << " from " << from << " to " << via << " via " << to <<"." << endl;
    else {
        hanoi(n - 1, from, to, via);
        cout << "Moved the disk " << n << " from " << from << " to " << via << " via " << to << "." << endl;
        hanoi(n - 1, to, via, from);
    }
}

int main()
{
    int n;

    cout << "Enter the number of disks : ";
    cin >> n;

    hanoi(n, 'A', 'B', 'C');

    return 0;
}