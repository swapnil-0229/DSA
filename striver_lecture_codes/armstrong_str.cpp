#include <bits/stdc++.h>
using namespace std;

long int power(int a, int b)
{

    if (b == 0)
        return 1;
    power(a, b - 1);
    return a * power(a, b - 1);
    
}

void armstrong_num(int n)
{

    int sum=0;
    int count=0;
    int ld=0;
    int num = n;
    int num1 = n;

    while (num > 0)
    {

        num = num / 10;
        count = count + 1;
    }

    while (n > 0)
    {

        ld = n % 10;
        sum = sum + power(ld, count);
        n = n / 10;
    }

    if(sum == num1) cout << "True";
    else cout << "False";
}

int main()
{

    int n;

    cin >> n;
    armstrong_num(n);
    
}