
/*

// 1. Order list

#include <iostream>

using namespace std;

int main()
{
    int menu;
    int bugger = 0;
    int fries = 0;
    int coke = 0;
    
    while (1) {

        cout << "Select a menue (1-4)" << endl;
        cout << "1) Bugger, 2) Fries, 3) Coke, 4) Finish" << endl;
        cin >> menu;

        if (menu == 1) {
            cout << "You've ordered a Bugger\n" << endl;
            bugger++;
        }

        else if (menu == 2) {
            cout << "You've ordered a Fries\n" << endl;
            fries++;
        }

        else if (menu == 3) {
            cout << "You've ordered a Coke\n" << endl;
            coke++;
        }

        else if (menu == 4) {
            cout << "Your order has been received!\n" << endl;
            break;
        }

    }

    cout << "Your orders" << endl;

    if (bugger > 0) {
        cout << "1) Bugger * " << bugger << endl;
    }

    if (fries > 0) {
        cout << "2) Fries * " << fries << endl;
    }

    if (coke > 0) {
        cout << "3) Coke * " << coke << endl;
    }
}

// 2. Times Table

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 10; i++) {
        for (int j = 2; j < 10; j++) {
            cout << j << "*" << i << "=" << j * i << "  ";
        }
        cout << endl;
    }
}

*/

// 3. Lotto

#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());

    int a, b, c, d, e, f;

    while(1) {
        a = (gen() % 45);
        b = (gen() % 45);
        c = (gen() % 45);
        d = (gen() % 45);
        e = (gen() % 45);
        f = (gen() % 45);

        if (a == b || a == c || a == d || a == e || a == f) continue;
        if (b == c || b == d || b == e || b == f) continue;
        if (c == d || c == e || c == f) continue;
        if (d == e || d == f) continue;
        if (e == f) continue;
        else break;

    }

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
}

/*

// 4. Diamond

#include <iostream>

using namespace std;

int main()
{
    int height;
    
    cout << "input height: ";
    cin >> height;

    if (height % 2 == 0) {
        cout << "Only ODD numbers are allowed!" << endl;
        return 0;
    }

    for (int i = 0; i < height; i++) {

        if (i % 2 == 0) {
            for (int j = height - 1; j > i; j = j - 2) {
                cout << " ";
            }
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    for (int i = 0; i < height-1; i++) {

        if (i % 2 == 0) {
            for (int j = 0; j <= i; j = j + 2) {
                cout << " ";
            }
            for (int j = height-2; j > i; j--) {
                cout << "*";
            }
            cout << endl;
        }
    }
}

// 5. Pascal's triangle

#include <iostream>

using namespace std;

int main()
{
    int height;

    cout << "input height: ";
    cin >> height;

    for (int i = 0; i < height; i++) {

        int num = 1;
        
        for (int j = 1; j < (height - i); j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << " " << num;
            num = num * (i - k) / (k + 1);
        }
        cout << endl;

    }
}

*/