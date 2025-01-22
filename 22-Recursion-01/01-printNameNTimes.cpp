#include <iostream>
#include <string>

using namespace std;

void printName(string name, int counter, int n)
{
    if (counter > n)
        return;
    cout << "Name is : " << name << endl;
    printName(name, ++counter, n);
}

int main()
{
    int num;
    string name;
    cout << "Enter the no. of times u want to print your name:" << endl;
    cin >> num;
    cout << "Enter your name:" << endl;
    cin >> name;

    printName(name, 1, num);

    return 0;
}

// Each call to printName performs a constant amount of work (printing the name and incrementing the counter). The function is called exactly n times because the base condition(counter > n) stops further recursion.
// Time Complexity : O(N)

// The space complexity includes:
// Stack space: Each recursive call uses stack memory to store function parameters and return addresses.
// Other memory: Memory required for variables and function parameters (constant).
// The space complexity is determined by the stack usage since other memory requirements are constant.
// Space Complexity = O(N)

// Stack Space
// The depth of recursion corresponds to the number of calls made.For N,N calls,the stack space used is proportional to N.
// Stack Space = 𝑂(N)

// Stack Space:
// This is the memory used for the function call stack in recursion.
// It includes space for function parameters, local variables, and the return address of each recursive call.
// The stack depth corresponds to the maximum number of recursive calls at any given time.

// Space Complexity:
// This is the total memory used by the algorithm, including stack space and any other memory allocations.
// If the function uses extra memory (e.g., arrays, objects, or global variables), it contributes to the space complexity.