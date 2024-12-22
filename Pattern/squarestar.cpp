// -----Square Star Pattern-----//
/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/


#include <iostream>
using namespace std;

void sqstar(int n)
{

    int space = 0;

    for (int i = 0; i < n; i++)
    {

        // star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        space += 2;
        cout << endl;
    }

    space = 8;
    for (int i = 1; i <=n; i++)
    {

        // star
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }

        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        space -= 2;
        cout << endl;
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