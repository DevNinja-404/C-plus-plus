#include <iostream>
using namespace std;
int main()
{
    int num1 = 10, num2 = 2;

    // Arithmetic Operators :
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    cout << num1++ << endl; // Post-Increment
    cout << num1-- << endl; // Post-Decrement
    cout << num1 << endl;
    cout << "---------------" << endl;

    // Relational Operators :
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;
    cout << "---------------" << endl;

    // Logical Operators :
    cout << (true && false) << endl;
    cout << (true && true) << endl;
    cout << (true || false) << endl;
    cout << (false || false) << endl;
    cout << (!false) << endl;
    cout << (!true) << endl;
    cout << "---------------" << endl;

    // Assignment Operators :
    num1 += 10;
    cout << num1 << endl;
    num2 -= 1;
    cout << num2 << endl;
    cout << "---------------" << endl;

    // Bitwise Operators :
    int num3 = 5; // 0101
    int num4 = 8; // 1000
    cout << (num3 << 1) << endl;
    cout << (num3 >> 1) << endl;
    cout << (num3 & num4) << endl;
    cout << (num3 | num4) << endl;
    cout << (num3 ^ num4) << endl;
    cout << "---------------" << endl;

    // Miscellaneous Operators :
    cout << sizeof(num1) << endl;
    2 > 3 ? cout << "2 is greater than 3" : cout << "2 is smaller than 3" << endl;
    cout << (&num1) << endl;
    cout << "---------------" << endl;

    // Post-Increment/Decrement And Pre-Increment/Decrement :
    int num5 = 10;
    cout << num5++ << endl; // 10
    cout << ++num5 << endl; // 12

    return 0;
}