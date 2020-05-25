#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

bool f(int x, int y)
{
    return x > y;
}

void vectorDemo()
{
    //C++ stl
    vector<int> A = {11, 12, 13, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // cout << *max_element(A.begin(),A.end()) << endl;
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

    auto fi = s.find(-27);
    if (fi == s.end())
    {
        cout << endl
             << "Not present" << endl;
    }
    else
    {
        cout << endl
             << "Present" << *fi << endl;
    }
    auto fi2 = s.lower_bound(-27);
    auto fi3 = s.upper_bound(-27);
    cout << *fi2 << " " << *fi3 << endl;

    auto fi4 = s.upper_bound(36);
    if (fi4 == s.end())
    {
        cout << "Unable to find something like that";
    }
}

void mapDemo()
{
    map<int, int> C;
    C[1] = 100;
    C[2] = 200;
    C[3] = 300;
    C[4] = 400;
    C[5] = 500;

    map<char, int> D;
    string s = "Saurabh Kumar";
    for (char c : s)
    {
        D[c]++;
    }
    cout << D['a'] << " " << D['r'] << endl;
}

void awesomestl()
{
    // add [1,10];
    // add [11, 99];
    // add [101, 199];
    set<pair<int, int>> S;
    S.insert({1, 10});
    S.insert({11, 99});
    S.insert({101, 199});

    int pt = 198;
    auto it = S.upper_bound({pt, INT64_MAX});
    if (it == S.begin())
    {
        cout << "the given point's not lying around";
        return;
    }
    it--;
    pair<int, int> current = *it;
    if (current.first <= pt && pt <= current.second)
    {
        cout << "yes it's present " << current.first << " " << current.second << endl;
    }
    else
    {
        cout << "the given point is not lying around";
    }
}
int main()
{
    //Vector Examples
    // vectorDemo();
    //Set Examples
    // setDemo();
    //Map Examples
    // mapDemo();
    // awesomestl
    awesomestl();
}


