// Variables are defined as the containers where we store our values when our code is executed

#include <iostream>
using namespace std;
int main()
{
    int apples = 10;
    char decision = 'y';
    bool flag = true;
    float rate = 5.5;
    double data = 2.3456781234;
    wchar_t wch = L'a'; // L prefix denotes a wide character literal
    string name = "Bikash";

    cout << "Integer : " << apples << endl;
    cout << "size of int : " << sizeof(apples) << endl;

    cout << "Character : " << decision << endl;
    cout << "size of char : " << sizeof(decision) << endl;

    cout << "Boolean : " << flag << endl;
    cout << "size of flag : " << sizeof(flag) << endl;

    cout << "Float : " << rate << endl;
    cout << "size of float : " << sizeof(rate) << endl;

    cout << "Double : " << data << endl;
    cout << "size of double : " << sizeof(data) << endl;

    std::wcout << "WideChar : " << wch << endl;
    cout << "size of wchar_t : " << sizeof(wch) << endl;

    cout << "String : " << name << endl;
    cout << "size of string : " << sizeof(name) << endl;

    return 0;
}