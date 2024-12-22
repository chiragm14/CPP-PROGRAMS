#include <iostream>
using namespace std;

// Function to compute the nth Fibonacci number
int fibonacci(int n)
{
    if (n <= 0)
    {
        return -1; // Invalid input
    }
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int a = 0, b = 1, nextno;
    for (int i = 3; i <= n; i++)
    {
        nextno = a + b;
        a = b;
        b = nextno;
    }
    return b;
}

int main()
{
    int n;
    cout << "Enter the position n: ";
    cin >> n;

    int result = fibonacci(n);
    if (result == -1)
    {
        cout << "Invalid input. n should be a positive integer greater than 0." << endl;
    }
    else
    {
        cout << "The " << n << "th Fibonacci number is: " << result << endl;
    }



    return 0;
}
