#include <iostream>
#include <vector>

using namespace std;

int getPartitionIndex(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pIndex = getPartitionIndex(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main()
{
    vector<int> arr = {4, 3, 2, 1, 7, 9, 5, 6};
    quickSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// T.C => O(NLogN) for the best and average case and O(N^2) for the worst case which occurs if we take the highest or lowest element of the array as pivot.

// Space complexity : O(1)+O(N) where O(N) is the auxilliary stack space