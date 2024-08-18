/*
  WAP to divide people into 3 age group and print as indicated :
  Below 12 = Child
  Between 12 and 18 = Teenager
  Above 18 = Adult
*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age :" << endl;
    cin >> age;
    if (age <= 12)
    {
        cout << "You are Child" << endl;
    }
    else if (age > 12 && age < 18)
    {
        cout << "You are Teenager" << endl;
    }
    else
    {
        cout << "You are Adult" << endl;
    }
}
