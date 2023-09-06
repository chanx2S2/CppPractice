/*

// 1. Simple calculator

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Input1: ";
    cin >> a;

    cout << "Input2: ";
    cin >> b;

    cout << "Add: " << a + b << endl;
    cout << "Sub: " << a - b << endl;
    cout << "Mul: " << a * b << endl;
    cout << "Div: " << a / b << endl;

    return 0;
}

*/

// 2. ID card

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a1, a2;
    int b;

    cout << "Your student number: ";
    cin >> b;

    cout << "Your name: ";

    cin >> a1;
    cin >> a2;

    cout << "My name is " << a1 << " " << a2 << "." << endl;

    cout << "My student ID is " << b << "." << endl;

    cout << "My name and ID is " << a1 << " " << a2 << " and " << b << endl;
    
    return 0;
}

/*

// 3. Wrong number

// -> 0이 출력된다.

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "number: ";
    cin >> a;

    cout << "what happen? " << a << endl;

    return 0;
}

*/


/*

// 4. How old are you?

#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Enter your age: ";
    cin >> a;

    cout << "Your age in months is " << a * 12 << "." << endl;

    return 0;
}

*/

/*

// 5. Celsisus and Fahrenheit

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;

    cout << "Please enter a Celsius valute: ";
    cin >> a;

    cout << a << " degrees Celsius is " << a * 1.8 + 32.0 << " degrees Fahrenheit." << endl;

    return 0;
}

*/