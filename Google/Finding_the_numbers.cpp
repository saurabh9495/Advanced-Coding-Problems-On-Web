#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int testcases, noe;
	cin >> testcases;
	for(int i=0;i<testcases;i++){
	    cin >> noe;
	    int noe_all;
	    noe_all = 2*noe +2;
	    vector<int> v(noe);
        set<int> s;
        for (int i = 0; i < noe_all; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());        
        for (int j = 0; j < noe_all - 1; j++)
        {
            if (v[j] == v[j + 1])
            {
                j++;
            }
            else
            {
                s.insert(v[j]);
            }
        }
        for (int x : s)
        {
            cout << x << " ";
        }
        cout << endl;
        
	}
	return 0;
}
