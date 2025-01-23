#include <iostream>
using namespace std;

int findCount(int num, int arr[], int size)
{
    // int sizeOfArray = sizeof(arr) / sizeof(arr[0]); the size of array here doesn't work because we know that to the function the pointer to the first element of the array is passed.so the sizeof(arr) returns us the size of int*

    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    return count;
}

// The time complexity of the above code is O(N) ignoring the other constant operations.
// Suppose we had Q numbers and for each number we have to find the no.of times it has appeared then the time complexity of our code will be O(Q*N)

// Now, if the length of the query(numbers to search) becomes large like 10^5 and the array size also becomes large like 10^5, the time complexity will be O(10^10).

// We know from our previous knowledge that 10^8 operations take 1 second to get executed. So, 10^10 operations will take around 100 seconds(10^10/10^8). We cannot say a code is good if it takes 100 seconds to get executed

// This is where hashing comes in.It is a technique which enables us to do the above in much faster way.

// Hashing : prestore -> fetch when required

int main()
{
    int num, numToCount;
    cout << "Enter the no. of elements in the array:" << endl;
    cin >> num;
    int arr[num];
    cout << "Enter those elements:" << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the no. which u want to search in the array:" << endl;
    cin >> numToCount;

    cout << numToCount << " has repeated in the array for " << findCount(numToCount, arr, num) << " times " << endl;

    return 0;
}