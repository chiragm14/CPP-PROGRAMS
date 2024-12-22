//Linear Search in Array

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 1};

    cout << "Array is ";
    printArray(arr, 10);

    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is Present in Array" << endl;
    }
    else
    {
        cout << "Key is Not Present in Array" << endl;
    }

    return 0;
}