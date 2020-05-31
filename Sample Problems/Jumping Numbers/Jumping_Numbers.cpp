#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
// typedef long long int int;
int main()
{
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int val;
        cin >> val;
        for (int j = 1; j <= val; j++)
        {
            int n = j, first = INT8_MIN, second = 0, ctr = 0, len = (to_string(j)).length();
            while (n != 0)
            {
                second = n % 10;
                if (abs(second - first) == 1)
                {
                    ctr++;   
                }
                n = n / 10;
                first = second;
            }
            if(ctr == len-1){
                cout << j << " "; 
            }
        }
        cout << endl;
    }
}