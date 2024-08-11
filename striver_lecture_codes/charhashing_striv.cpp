#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {

        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;

    while (q--)
    {

        char c;
        cin >> c;

        cout << hash[c - 'a'] << endl;
    }

    /*
    to make the code work for lowercase as well as uppercase letters

    int hash[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {

        hash[s[i]]++;
    }

    int q;
    cin >> q;

    while (q--)
    {

        char c;
        cin >> c;

        cout << hash[c] << endl;
    }
    */
}