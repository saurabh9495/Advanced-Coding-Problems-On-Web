#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //C++ stl
    vector<int> A = {11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    cout << A[1] << endl;
    sort(A.begin(), A.end());
    bool present = binary_search(A.begin(), A.end(), 43);
    if (present)
    {
        cout << "presnt in vecctor" << endl;
    }
    else
    {
        cout << "not present" << endl;
    }

    // 0 1 2 3 4 5 6 7 8 9 11 12 13
    A.push_back(100);
    cout << A[A.size() - 1] << endl;
    // 0 1 2 3 4 5 6 7 8 9 11 12 13 100
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    // 0 1 2 3 4 5 6 7 8 9 11 12 13 100 100 100 123
    vector<int>::iterator fi = lower_bound(A.begin(), A.end(), 100);  //>=
    vector<int>::iterator fi2 = upper_bound(A.begin(), A.end(), 100); //>

    cout << *fi << " " << *fi2 << endl;
    cout << fi2 - fi << endl;
}