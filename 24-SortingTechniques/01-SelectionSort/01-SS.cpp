// Sorting the array with the Selection Sort Algorithm :

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// The time complexity of the above algorithm is O(N^2).
// The space complexity of the above algorithm is O(1).
