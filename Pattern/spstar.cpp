#include <iostream>
using namespace std;

void spstar(int n)
{

    int space = 2 * n - 2;

    for (int i = 1; i <= 2 * n - 1; i++)
    {

        int stars = i;
        if (i > n)
            stars = 2 * n - i;

        // star
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            space -= 2;
        else
            space += 2;
    }
}

void sqstar(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout<<endl;
    }

}

int main()
{

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    sqstar(n);

    return 0;
}