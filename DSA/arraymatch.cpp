#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n=6;
    int m=4;
    int arr1[n] = {1,2,2,2,3,4};
    int arr2[m] = {2,2,3,3};

    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m)
    {

        if (arr1[i] == arr2[j])
        {

            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    //Printing Vector
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
