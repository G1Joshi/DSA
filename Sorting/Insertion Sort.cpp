#include <iostream>
using namespace std;

void InsertionSort(int *data, int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i, key = data[i];
        while (data[j - 1] > key && j > 0)
        {
            data[j] = data[j - 1];
            j--;
        }
        data[j] = key;
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
    InsertionSort(data, size);
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    return 0;
}