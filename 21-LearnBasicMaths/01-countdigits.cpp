// Given an integer N, return the number of digits in N.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // This is Brute Force Approach which i knew:
    // int num, temp, count = 0;
    // cout << "Enter a number" << endl;
    // cin >> num;
    // temp = num;
    // while (temp > 0)
    // {
    //     count++;
    //     temp = temp / 10;
    // }
    // cout << "The no. of digits in " << num << " is " << count;
    // return 0;

    // If the no. of iterations is based on division then the time complexity will be logarithmic and the base of log is the no. with which u r dividing inside the loop

    // Time Complexity is : O(log10N+1) because in the while loop we divide N by 10 until it becomes 0 which takes log10N iterations and in each iteration of the while loop we perform constant time operations like division and increment the counter.we do +1 because in the worst case when N is a multiple of 10,the loop runs for log10N +1 times.

    // Space Complexity is:O(1) because no matter what is the input the space required for the execution of the program is 12 bytes which is constant.

    // Optimal Approach:
    int num, count = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    count = (int)(log10(num) + 1);
    cout << "The no. of digits in " << num << " is " << count << endl; // The expression (int)(log10(n)+1)
                                                                       // calculates the number of digits in 'n' adds 1 to it
                                                                       // and casts it to an integer.
    return 0;

    // Time Complexity: 0(1) because simple arithmetic operations in constant time are computed on integers.
    // Space Complexity : O(1) as only a constant amount of additional memory for the count variable regardless of size of the input number is required.
}