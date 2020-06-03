using namespace std;
#include <bits/stdc++.h>


int func(vector<int>&A, int s, int e, int sum, int curr, vector<vector<int>>&dp)
{
    if(s > e)
    {
        return abs((sum-curr) - curr);
    }
    if(dp[curr+A[s]][s+1] == -1)
    dp[curr+A[s]][s+1] = func(A, s+1, e, sum, curr+A[s], dp);
    
    if(dp[curr][s+1] == -1)
    dp[curr][s+1] = func(A, s+1, e, sum, curr, dp);
    
    return min(dp[curr+A[s]][s+1], dp[curr][s+1]);
}
int main() {
	//code
	int T;
	cin >> T;
	while(T--)
	{
	    int n;
	    cin >> n;
	    vector<int>a(n);
	    int sum = 0;
	    for(int i = 0; i < n; i++)
	    { cin >> a[i]; sum = sum+a[i];}
	    vector<vector<int>>dp(sum+2, vector<int>(n+2, -1));
	    cout << func(a, 0, n-1, sum, 0, dp) << endl;
	}
	return 0;
}