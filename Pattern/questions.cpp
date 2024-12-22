#include <iostream>
using namespace std;

void questions(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i + 1; j++)
        {

            cout << i;
        }
        cout << endl;
    }
}

void questions1(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 0; j < n - i + 1; j++)
        {

            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }

        cout << endl;
    }
}

void questions2(int n)
{
    int num = 1;

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 0; j < n - i; j++)
        {

            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << num;
            num = num + 1;
        }

        cout << endl;
    }
}

void questions3(int n)
{

    for (int i = 1; i<=n; i++)
    {
        // spaces
        for (int j = 0; j<i-1; j++)
        {
            cout <<" ";
        }

        for (int j = i; j <=n; j++)
        {            
            cout << j;
        }

        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    questions3(n);

    return 0;
}