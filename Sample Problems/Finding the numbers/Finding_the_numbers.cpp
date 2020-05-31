// code for finding the numbers

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int noe, noe_all;
        cin >> noe;
        noe_all = 2 * noe + 2;
        vector<int> v;
        vector<int> w;
        for (int i = 0; i < noe_all; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] == v[j + 1])
            {
                j++;
            }
            else
            {
                w.push_back(v[j]);
            }
        }
        sort(w.begin(), w.end());
        for (int l = 0; l < w.size(); l++)
        {
            cout << w[l] << " ";
        }
        cout << endl;
    }
    return 0;
}
