// Subarray with given sum some testcases not passed

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        bool flag = true;
        int noe, sum, target = 0;
        cin >> noe >> sum;
        vector<int> v(noe);
        for (int i = 0; i < noe; i++)
        {
            cin >> v[i];
        }
        int j = 0, k = 0;
        for (j = 0; j < noe; j++)
        {
            target += v[j];
            if (target == sum)
            {
                cout << 1 << " " << j + 1 << endl;
                flag = false;
                break;
            }
            else if (target > sum)
            {
                break;
            }
        }
        for (k = 0; k < j; k++)
        {
            target -= v[k];
            if (target == sum)
            {
                cout << k + 2 << " " << j + 1 << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}