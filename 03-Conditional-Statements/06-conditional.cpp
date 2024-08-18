// WAP to take input an alphabet and print whether it is consonant or vowel

#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout << "Enter any Alphabet:" << endl;
    cin >> alphabet;
    switch (tolower(alphabet))
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << alphabet << " is vowel" << endl;
        break;
    default:
        cout << alphabet << " is consonant" << endl;
    }
    return 0;
}