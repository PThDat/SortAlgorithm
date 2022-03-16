void DoubleSelectionSort(int* arr, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        int minPos = i, maxPos = i;
        for (int j = i + 1; j < len - i; j++)
        {
            if (arr[j] < arr[minPos])
                minPos = j;
            if (arr[j] > arr[maxPos])
                maxPos = j;
        }
        swap(arr[i], arr[minPos]);
        swap(arr[len - i - 1], arr[maxPos]);
    }
}