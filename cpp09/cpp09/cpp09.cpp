/*

// 1. Caesar cipher two [Easy]

#include <iostream>
#include <string>

using namespace std;

void cipher_string() {

    string str;
    int key;
    char tmp;

    cout << "Input string: ";
    getline(cin, str);

    cout << "Input key: ";
    cin >> key;

    cout << "Cipher string: ";

    for (int i = 0; i < str.length(); i++) {

        tmp = (char)str[i];

        if (tmp == ' ') {
            cout << str[i];
        }
        else {
            tmp = tmp + key;
            if (tmp > 'Z') {
                int count = tmp - 'Z' - 1;
                str[i] = 'A' + count;
                cout << str[i];
            }
            else {
                str[i] = tmp;
                cout << str[i];
            }
        }
    }

}

int main()
{  
    cipher_string();
    
}

*/

// 2. Quite advanced calculator [Easy]

#include <iostream>
#include <string>

using namespace std;

void print() {

    cout << "--------------" << endl;
    cout << "+ : addition" << endl;
    cout << "* : multiplication" << endl;
    cout << "---------------" << endl;
    cout << endl << endl;

}

void calculate() {

    print();

    char op;
    string mat1;
    string mat2;
    int mat3[3][3] = { 0, };

    cout << "Select an operator: ";
    cin >> op;

    cin.ignore();
    cout << "input matrix1: ";
    getline(cin, mat1);

    cout << "input matrix2: ";
    getline(cin, mat2);

    cout << "Answer:" << endl;

    if (op == '+') {

        for (int i = 0; i < mat1.length(); i++) {
            if (mat1[i] == ' ' || mat2[i] == ' ') continue;

            int tmp1 = mat1[i] - '0';
            int tmp2 = mat2[i] - '0';

            cout << tmp1 + tmp2 << " ";

            if ((i + 2) % 3 == 0) {
                cout << endl;
            }
        }
    }
    else if (op == '*') {

        int tmp1[9] = { 0, };
        int tmp2[9] = { 0, };
        int (*ptr1)[3] = (int(*)[3])tmp1;
        int (*ptr2)[3] = (int(*)[3])tmp2;

        for (int i = 0; i < mat1.length(); i++) {

            if (mat1[i] == ' ' || mat2[i] == ' ') continue;

            tmp1[i] = mat1[i] - '0';
            tmp2[i] = mat2[i] - '0';

        }

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                for (int k = 0; k < 3; k++) {

                    mat3[i][j] += ptr1[i][k] * ptr2[k][j];

                }

            }

        }

        for (int i = 0; i < 3; i++) {

            for (int j = 0; j < 3; j++) {

                cout << mat3[i][j] << " ";

            }

            cout << endl;

        }

    }

}


int main()
{
    calculate();
}

/*

// 3. Find a string [Normal]

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1;
    string str2;
    
    cout << "string1: ";
    getline(cin, str1);

    cout << "string2: ";
    getline(cin, str2);

    if (str1.find(str2) != string::npos) {

        cout << str1.find(str2);

    }

    else cout << "Not found";

    /*
    for (int i = 0; i < str1.length(); i++) {

        if (str1[i] == ' ') continue;

        for (int j = 0; j < str2.length(); j++) {

            if (str1[i] == str2[j])

        }
    }

}

*/
