
/*


// 1.Box

#include <iostream>

using namespace std;

int main()
{
    short l, w, h; // l = length, w = width, h = height

    cout << "input length: ";
    cin >> l;

    cout << "input width: ";
    cin >> w;

    cout << "input height: ";
    cin >> h;

    cout << "Box volume: " << l * w * h << endl;
}

*/

/*

// 2.Timer

#include <iostream>

using namespace std;

int main()
{
    int sec; // second

    cout << "Enter the number of seconds: ";
    cin >> sec;

    cout << sec << " seconds = " << sec / (60 * 60 * 24) << " days, "
        << (sec % (60 * 60 * 24)) / (60 * 60) << " hours, "
        << ((sec % (60 * 60 * 24)) % (60 * 60)) / 60 << " minutes, "
        << (((sec % (60 * 60 * 24)) % (60 * 60)) % 60) % 60 << " seconds";
}

*/

// 3. Digits

#include <iostream>

using namespace std;

int main()
{
    int num; // number

    cout << "Input your number: ";
    cin >> num;

    cout << "thousands: " << num / 1000 << endl;
    cout << "hundreds: " << (num % 1000) / 100 << endl;
    cout << "tens: " << ((num % 1000) % 100) / 10 << endl;
    cout << "ones: " << ((num % 1000) % 100) % 10 << endl;
}