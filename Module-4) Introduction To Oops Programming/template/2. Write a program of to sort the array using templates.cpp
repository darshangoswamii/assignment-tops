//2. Write a program of to sort the array using templates
#include <iostream>
using namespace std;
template<typename T, int size>
void sortarray(T (&arr)[size])
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int i;

    int arri[5] = {5, 4, 3, 2, 1};
    cout << "\nOriginal array = ";
    for (i = 0; i < 5; i++)
    {
        cout << arri[i] << " ";
    }
    sortarray(arri);
    cout << "\nSorted array = ";
    for (i = 0; i < 5; i++)
    {
        cout << arri[i] << " ";
    }

    double arrd[5] = {5.3, 4.5, 3.5, 5.2, 1.6};
    cout << "\nOriginal array = ";
    for (i = 0; i < 5; i++)
    {
        cout << arrd[i] << " ";
    }
    sortarray(arrd);
    cout << "\nSorted array = ";
    for (i = 0; i < 5; i++)
    {
        cout << arrd[i] << " ";
    }

    char arrc[5] = {'z', 'd', 'f', 'r', 'i'};
    cout << "\nOriginal array = ";
    for (i = 0; i < 5; i++)
    {
        cout << arrc[i] << " ";
    }
    sortarray(arrc);
    cout << "\nSorted array = ";
    for (i = 0; i < 5; i++)
    {
        cout << arrc[i] << " ";
    }

    return 0;
}

