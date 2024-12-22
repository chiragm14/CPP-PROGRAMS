#include <iostream>
using namespace std;

void new1(int n)
{

    for (int i = 1; i <= n; i++)
    {

        int stars = 2 * i - 2;

        // numbers
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        // stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        for (int j = n - i + 1; j >= 1;  j--)
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

    new1(n);

    return 0;
}