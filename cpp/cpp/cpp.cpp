#include <iostream>

using namespace std;

struct member {
    int id;
    string name;
    union {
        string telephone;
        string cellphone;
        string email;
        // why not string?
    };
};

int main()
{
    member m = { 12345678, "Taejune park", "tajune.park@jnu.a.kr" };

    return 0;
}
