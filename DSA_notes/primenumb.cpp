#include <bits/stdc++.h>
using namespace std;

void prime_num(int n)
{

    int count=0;
    int i;
    for ( i = 1; i <= n; i++)
    {

        if (n % i == 0)
        
            count++;
        
    }

    if (count == 2)
        cout << " It is a prime number";
    else
        cout << " It is not a prime number";
}

int main()
{

    int n;
    cin >> n;

    prime_num(n);
}