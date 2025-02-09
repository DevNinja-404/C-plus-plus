#include <iostream>
#include <vector>

using namespace std;

// we use swap to check whether our array has been sorted or not and we use size to pass the size of the array since we know that after each scan we have sent the largest element to the last index of the array

// This is one way to do this so basically here we have replaced the outer for loop with the recusion calls
// void bubbleSortRecursively(vector<int> &arr, int size)
// {
//     if (size == 1)
//         return;
//     for (int i = 0; i < size - 2; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             int temp = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = temp;
//         }
//     }
//     bubbleSortRecursively(arr, size - 1);
// }

// Optimized code for the recursive bubble sort :
void bubbleSortRecursively(vector<int> &arr, int size)
{
    if (size == 1)
        return;

    int didSwap = 0;

    for (int i = 0; i < size - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            didSwap = 1;
        }
    }

    if (didSwap == 0)
        return;

    bubbleSortRecursively(arr, size - 1);
}

//  We can also implement this by replacing both outer and inner loop with recursion :

// void bubblePass(vector<int> &arr, int i, int size)
// {
//     if (i == size)
//         return;

//     if (arr[i] > arr[i + 1])
//     {
//         int temp = arr[i];
//         arr[i] = arr[i + 1];
//         arr[i + 1] = temp;
//     }

//     bubblePass(arr, i + 1, size);
// }

// void bubbleSortRecursively(vector<int> &arr, int size)
// {
//     if (size <= 1)
//         return;

//     bubblePass(arr, 0, size - 1);

//     bubbleSortRecursively(arr, size - 1);
// }

int main()
{
    vector<int> arr = {4, 2, 7, 1, 3};
    bubbleSortRecursively(arr, arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

// The time complexity is O(N^2) for the worst and average case and for the best case the time complexity is O(N).

// The space complexity is O(N).[Auxiliary Stack Space] for all the cases