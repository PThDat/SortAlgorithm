void BubbleSort(int* arr, int len)
{
    int count = 1;
    while (count < len)
    {
        for (int i = len - 1; i > 0; i--)
            if (arr[i] < arr[i - 1])
                swap(arr[i], arr[i - 1]);
        count++;
    }
}