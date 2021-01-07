#include <iostream>
using namespace std;

void swap(int *data, int i, int j)
{
    int temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

void BubbleSort(int *data, int size)
{
    bool swapped = 1;
    for (int i = size - 1; i >= 0 && swapped; i--)
    {
        swapped = 0;
        for (int j = 0; j < i; j++)
        {
            if (data[j] > data[j + 1])
            {
                swap(data, j, j + 1);
                swapped = 1;
            }
        }
    }
}

int main()
{
    int size;
    cin >> size;
    int *data = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> data[i];
    }
    BubbleSort(data, size);
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    return 0;
}