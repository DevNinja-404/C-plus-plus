#include <iostream>

using namespace std;

int main()
{
    int arr[] = {14, 9, 15, 12, 6, 8, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= size - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}