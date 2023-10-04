/*

// 1. Caesar cipher

#include <iostream>

using namespace std;

int main()
{
    string str;
    int n;

    cout << "Input string: ";
    cin >> str;

    cout << "Input key: ";
    cin >> n;

    cout << "Cipher string: ";
    cout << char(str[0] + n);
    cout << char(str[1] + n);
    cout << char(str[2] + n);
    cout << char(str[3] + n);
    cout << char(str[4] + n);
    cout << char(str[5] + n);
    cout << char(str[6] + n);
    cout << char(str[7] + n);

}

*/

/*

// 2. Decryption

#include <iostream>

using namespace std;

int main()
{
    string str;
    int n;

    cout << "Input string: ";
    cin >> str;

    cout << "Input key: ";
    cin >> n;

    cout << "Cipher string: ";
    cout << char(str[0] - n);
    cout << char(str[1] - n);
    cout << char(str[2] - n);
    cout << char(str[3] - n);
    cout << char(str[4] - n);
    cout << char(str[5] - n);
    cout << char(str[6] - n);
    cout << char(str[7] - n);

}

*/

/*

// 3. Quadrant

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    string str;

    cout << "Input x: ";
    cin >> a;

    cout << "Input y: ";
    cin >> b;

    (a > 0 && b > 0) ? str = "It is located in the 1st quadrant.": "";
    (a < 0 && b > 0) ? str = "It is located in the 2nd quadrant." : "";
    (a < 0 && b < 0) ? str = "It is located in the 3rd quadrant." : "";
    (a > 0 && b < 0) ? str = "It is located in the 4th quadrant." : "";
    (a == 0 && b == 0) ? str = "It is origin point." : "";

    cout << str;

}

*/

/*

// 4. Population

#include <iostream>

using namespace std;

int main()
{
    long long a, b;

    cout << "Enter the world's population: ";
    cin >> a;

    cout << "Enter the population of KOR: ";
    cin >> b;

    cout << "The population of KOR is " << ((double) b / a) << "% of the wold population.";

}

*/

// 5. Your height

#include <iostream>

using namespace std;

int main()
{
    double h;

    cout << "Input your height: ";
    cin >> h;

    cout << h << "cm is " << (int) (h / 30.48) << " feet " << (h - (int)(h / 30.48) * 30.48) / 2.54 << " inch.";

}
