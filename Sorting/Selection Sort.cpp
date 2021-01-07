#include <iostream>
using namespace std;

void swap(int *data, int i, int j)
{
    int temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

void SelectionSort(int *data, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (data[j] < data[min])
            {
                min = j;
            }
        }
        swap(data, i, min);
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
    SelectionSort(data, size);
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    return 0;
}