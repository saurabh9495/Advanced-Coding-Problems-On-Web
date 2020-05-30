#include <iostream>
using namespace std;
typedef long long int lli;

bool isPrime(int a)
{
    for (int j = 2; j < a; j++)
    {
        if (a % j == 0)
            return 0;
    }
    return 1;
}

int main()
{
    lli test_cases;
    cin >> test_cases;
    for (lli i = 0; i < test_cases; i++)
    {
        lli number;
        for (lli j = 3; j < number; j = j + 2)
        {
            if (isPrime(j) == 1 && isPrime(number - j) == 1)
            {
                cout << j << " " << number - j << endl;
                break;
            }
        }
    }
    return 0;
}
