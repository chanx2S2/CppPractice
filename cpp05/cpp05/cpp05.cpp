
/*

// 1. Advanced calculator

#include <iostream>

using namespace std;

int main()
{
    char op;
    int a;
    int b;

    cout << "--------------" << endl;
    cout << "+ : add" << endl;
    cout << "- : subtract" << endl;
    cout << "* : multiply" << endl;
    cout << "/ : divide" << endl;
    cout << "Q : quit" << endl;
    cout << "---------------" << endl;

    cout << "Select an operator: ";
    
    cin >> op;

    if (op == 'Q') return 0;

    cout << "Input two number: ";
    cin >> a;
    cin >> b;

    cout << "Answer: ";

    if (op == '+') cout << a + b;
    else if (op == '-') cout << a - b;
    else if (op == '*') cout << a * b;
    else if (op == '/') {
        if (b == 0) cout << "Cannot divide by 0.";
        else cout << a / b;
    }
}

*/

/*

// 2. Discount

#include <iostream>

using namespace std;

int main()
{
    int item;

    cout << "number of items? ";
    cin >> item;

    cout << "price: ";
    
    if (item >= 10) {
        cout << item * 1000 << " KRW" << endl;
        cout << "discounted price: ";
        cout << (item * 1000) - (item * 1000 * 0.1) << " KRW";
    }
    else cout << item * 1000 << " KRW";
        
}

*/

/*

// 3. Digits two

#include <iostream>

using namespace std;

int main()
{

    cout << "Input your number: ";

    int num;
    cin >> num;

    if (num < 10000) {
        
        int thousands = num / 1000;

        cout << "thousands: ";

        if (thousands == 0) cout << "zero" << endl;
        if (thousands == 1) cout << "one" << endl;
        if (thousands == 2) cout << "two" << endl;
        if (thousands == 3) cout << "three" << endl;
        if (thousands == 4) cout << "four" << endl;
        if (thousands == 5) cout << "five" << endl;
        if (thousands == 6) cout << "six" << endl;
        if (thousands == 7) cout << "seven" << endl;
        if (thousands == 8) cout << "eight" << endl;
        if (thousands == 9) cout << "nine" << endl;

        int hundreds = (num % 1000) / 100;

        cout << "hundreds: ";

        if (hundreds == 0) cout << "zero" << endl;
        if (hundreds == 1) cout << "one" << endl;
        if (hundreds == 2) cout << "two" << endl;
        if (hundreds == 3) cout << "three" << endl;
        if (hundreds == 4) cout << "four" << endl;
        if (hundreds == 5) cout << "five" << endl;
        if (hundreds == 6) cout << "six" << endl;
        if (hundreds == 7) cout << "seven" << endl;
        if (hundreds == 8) cout << "eight" << endl;
        if (hundreds == 9) cout << "nine" << endl;

        int tens = ((num % 1000) % 100) / 10;

        cout << "tens: ";

        if (tens == 0) cout << "zero" << endl;
        if (tens == 1) cout << "one" << endl;
        if (tens == 2) cout << "two" << endl;
        if (tens == 3) cout << "three" << endl;
        if (tens == 4) cout << "four" << endl;
        if (tens == 5) cout << "five" << endl;
        if (tens == 6) cout << "six" << endl;
        if (tens == 7) cout << "seven" << endl;
        if (tens == 8) cout << "eight" << endl;
        if (tens == 9) cout << "nine" << endl;

        int ones = ((num % 1000) % 100) % 10;

        cout << "ones: ";

        if (ones == 0) cout << "zero" << endl;
        if (ones == 1) cout << "one" << endl;
        if (ones == 2) cout << "two" << endl;
        if (ones == 3) cout << "three" << endl;
        if (ones == 4) cout << "four" << endl;
        if (ones == 5) cout << "five" << endl;
        if (ones == 6) cout << "six" << endl;
        if (ones == 7) cout << "seven" << endl;
        if (ones == 8) cout << "eight" << endl;
        if (ones == 9) cout << "nine" << endl;

    } else return 0;
}

*/

// 4. Minimum values

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "input numbers:  ";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "minimum number: ";

    if (a < b) {
        if (a < c) cout << a;
        else if (c < a) cout << c;
    }
    else if (b < c) {
        if (b < a) cout << b;
        else if (a < b) cout << a;
    }

    else if (c < a) {
        if (c < b) cout << c;
        else if (b < c) cout << b;
    }

}

