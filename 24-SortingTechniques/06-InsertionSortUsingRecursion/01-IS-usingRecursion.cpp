#include <iostream>

using namespace std;

void insertionSort(int arr[], int range, int size)
{
    if (range == size)
        return;

    int i = range;
    while (i > 0 && arr[i] < arr[i - 1])
    {
        int temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
        i--;
    }

    insertionSort(arr, range + 1, size);
}

int main()
{

    int arr[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, 1, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}