#include <iostream>
using namespace std;

void complexp(int n)
{

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {

            int topd = i;
            int leftd = j;
            int rightd = (2 * n - 2) - j;
            int downd = (2 * n - 2) - i;

            cout << (n - min(min(topd, downd), min(leftd, rightd)))<<" ";
        }
        cout <<endl;
    }
    
}



int main()
{

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    complexp(n);

    return 0;
}