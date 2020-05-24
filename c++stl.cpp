#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool f(int x, int y)
{
    return x > y;
}

void vectorDemo()
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

    //1st way
    vector<int>::iterator fi = lower_bound(A.begin(), A.end(), 100);  //>=
    vector<int>::iterator fi2 = upper_bound(A.begin(), A.end(), 100); //>

    cout << *fi << " " << *fi2 << endl;
    cout << fi2 - fi << endl;

    sort(A.begin(), A.end(), f);
    vector<int>::iterator fi3;

    // for (fi3 = A.begin(); fi3 != A.end(); fi3++)
    // {
    //     cout << *fi3 << endl;
    // }

    // 2nd way
    vector<int> B = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    auto ii = lower_bound(B.begin(), B.end(), 16);
    auto ii2 = upper_bound(B.begin(), B.end(), 19);
    cout << *ii << " " << *ii2 << endl;
    cout << *ii2 - *ii << endl;
    sort(B.begin(), B.end(), f);

    for (int x : B)
    {
        cout << x << " ";
    }
    cout << endl;
    for (int &x : B)
    {
        x++;
        cout << x << " ";
    }
    cout << endl;
}

void setDemo()
{
    set<int> s;
    s.insert(24);
    s.insert(30);
    s.insert(-27);
    for (int y : s)
    {
        cout << y << " ";
    }
}

int main()
{
    //Vector Examples
    // vectorDemo();
    //Set Examples
    setDemo();
}