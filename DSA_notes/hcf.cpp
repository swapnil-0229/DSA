#include <bits/stdc++.h>
using namespace std;

void hcf(int a, int b)
{

    while (a > 0 && b > 0)
    {

        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << b;
    else
        cout << a;
}

int main()
{

    int a, b, c;
    

    cin >> a;
    
    cin >> b;

    hcf(a, b);
}