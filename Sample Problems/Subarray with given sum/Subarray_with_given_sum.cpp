// Subarray with given sum

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        bool flag = false;
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
            int target = 0;
            for (k = j; k < noe; k++)
            {
                target += v[k];
                if (target > sum)
                {
                    break;
                }
                if (target == sum)
                {
                    flag = true;
                    cout << j + 1 << " " << k + 1 << endl;
                    break;
                }
            }
            if (flag)
            {
                break;
            }
        }
        if (flag == false)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}