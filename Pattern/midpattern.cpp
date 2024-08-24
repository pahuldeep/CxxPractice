#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string st = "";

    int mid = s.length() / 2;
    for (int i = mid; i < s.length(); i++)
    {
        st += s[i];
        cout << st << "$" << " ";
    }
    for (int i = 0; i < mid; i++)
    {
        st += s[i];
        cout << st << "$" << " ";
    }
}