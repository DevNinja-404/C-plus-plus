#include <iostream>

using namespace std;

int main()
{

    int arr[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = size - 1; i >= 1; i--)
    {
        int wasSwapped = false;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            wasSwapped = true;
        }
        if (!wasSwapped)
            break;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Time complexity is O(N^2) for the worst and average case and O(N) for the best case.
// Space complexity is O(1).