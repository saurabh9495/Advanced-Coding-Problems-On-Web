// Maximum Index

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testcase, noe, target;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> noe;
        vector<int> v(noe);
        int max_index = -1;
        for (int i = 0; i < noe; i++)
        {
            cin >> v[i];
        }
        for (int j = 0; j < noe; j++)
        {
            for (int k = noe - 1; k >= j; k--)
            {
                if (v[j] <= v[k])
                {
                    target = k - j;
                    break;
                }
            }
            if (target > max_index)
            {
                max_index = target;
            }
        }
        cout << max_index << endl;
    }
    return 0;
}