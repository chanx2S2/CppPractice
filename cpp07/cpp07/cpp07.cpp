
/*

// 1. Lotto game!

#include <iostream>
#include <random>

using namespace std;

void lottery(int a, int b, int c, int d, int e, int f);

int main()
{

    int a, b, c, d, e, f;

    cout << "Guess lottery number:" << endl;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    cout << endl;
    
    lottery(a, b, c, d, e, f);

}

void lottery(int a, int b, int c, int d, int e, int f) {

    random_device rd;
    mt19937 gen(rd());

    int a2, b2, c2, d2, e2, f2;
    int count = 0;

    cout << "Number: ";

    while (1) {

        a2 = gen() % 45 + 1;
        b2 = gen() % 45 + 1;
        c2 = gen() % 45 + 1;
        d2 = gen() % 45 + 1;
        e2 = gen() % 45 + 1;
        f2 = gen() % 45 + 1;

        if (a2 == b2 || a2 == c2 || a2 == d2 || a2 == e2 || a2 == f2) continue;
        if (b2 == c2 || b2 == d2 || b2 == e2 || b2 == f2) continue;
        if (c2 == d2 || c2 == e2 || c2 == f2) continue;
        if (d2 == e2 || d2 == f2) continue;
        if (e2 == f2) continue;
        else break;
    }

    cout << a2 << " " << b2 << " " << c2 << " "
         << d2 << " " << e2 << " " << f2 << endl;
    cout << endl;

    if (a == a2) count++;
    if (b == b2) count++;
    if (c == c2) count++;
    if (d == d2) count++;
    if (e == e2) count++;
    if (f == f2) count++;

    cout << "You match " << count << " numbers! ";

    if (count == 3) cout << "You are in 5th place!";
    else if (count == 4) cout << "You are in 4th place!";
    else if (count == 5) cout << "You are in 3th or 2th place!";
    else if (count == 6) cout << "You are in 1th place!";
    else cout << "Try again!";

}

// 2. Prime number

#include <iostream>

using namespace std;

bool isPrime(int n);

int main()
{
    int num;
    
    while (1) {

        cout << "input number: ";
        cin >> num;

        if (num == -1) {
            cout << "Done." << endl;
            break;
        }
        else if (isPrime(num)) {
            cout << num << " is a prime number." << endl;
            cout << endl;
        }
        else {
            cout << num << " is not a prime number." << endl;
            cout << endl;
        }

    }
}

bool isPrime(int n) {

    for (int i = 2; (i * i) <= n; i++) {
        if ((n % i) == 0) {
            return 0;
        }
    }
    
    return 1;
}

// 3. ipower()

#include <iostream>

using namespace std;

int ipower(int n, int k);

int main()
{
    int num;

    cout << "input number: ";
    cin >> num;

    for (int i = 0; i < 11; i++) {
        cout << num << "^" << i << " = " << ipower(num, i) << endl;
    }

}

int ipower(int n, int k) {
    
    int mul = n;

    if (k == 0) return 1;

    for (int i = 1; i < k; i++) {
        mul = mul * n;
    }

    return mul;
}

*/

// 4. Probability

#include <iostream>
#include <random>

using namespace std;

void graph(int len, int dot);

int main()
{
    
    int num;

    cout << "Roll a dice 'n' times: ";
    cin >> num;
    
    graph(num, 20);
    
}

void graph(int len, int dot) {

    random_device rd;
    mt19937 gen(rd());
    
    int tmp = 0;
    int a = 0, b = 0, c = 0,
        d = 0, e = 0, f = 0;
    

    for (int i = 0; i < len; i++) {
        tmp = gen() % 6 + 1;

        if (tmp == 1) a++;
        else if (tmp == 2) b++;
        else if (tmp == 3) c++;
        else if (tmp == 4) d++;
        else if (tmp == 5) e++;
        else if (tmp == 6) f++;

        tmp = 0;
    }


    cout << endl;
    /*
    cout << "\n\n" << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    */

    // 주사위 1 그래프
    cout << "1:";
    for (int i = 0; i < a; i++) {
        cout << "@";
    }
    for (int i = 0; i < (len-a); i++) {
        cout << "*";
    }
    cout << endl;

    // 주사위 2 그래프
    cout << "2:";
    for (int i = 0; i < b; i++) {
        cout << "@";
    }
    for (int i = 0; i < (len - b); i++) {
        cout << "*";
    }
    cout << endl;

    // 주사위 3 그래프
    cout << "3:";
    for (int i = 0; i < c; i++) {
        cout << "@";
    }
    for (int i = 0; i < (len - c); i++) {
        cout << "*";
    }
    cout << endl;

    // 주사위 4 그래프
    cout << "4:";
    for (int i = 0; i < d; i++) {
        cout << "@";
    }
    for (int i = 0; i < (len - d); i++) {
        cout << "*";
    }
    cout << endl;

    // 주사위 5 그래프
    cout << "5:";
    for (int i = 0; i < e; i++) {
        cout << "@";
    }
    for (int i = 0; i < (len - e); i++) {
        cout << "*";
    }
    cout << endl;

    // 주사위 6 그래프
    cout << "6:";
    for (int i = 0; i < f; i++) {
        cout << "@";
    }
    for (int i = 0; i < (len - f); i++) {
        cout << "*";
    }
    cout << endl;
}