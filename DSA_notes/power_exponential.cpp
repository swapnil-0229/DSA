#include<bits/stdc++.h>
using namespace std;

int power_expon(int x, int n){
    // let x be the number and n be the power to be raised 
    if(n==0) return 1; // base case: x^0 = 1
    if(x==0) return 0; // base case: 0^n = 0
    int ans = 1;

    while(n>0){

        if(n%2==1){
            ans = ans * x;
            n = n -1;
        }else{
            x = x * x;
            n = n/2;
        }
    }
    return ans;
}

// If power is negative, we just need to output 1/ans instead of ans 

int power_expon_neg_power(int x, int n){
    int m = n;
    // m is declared to keep a check of initial value of n

    if(n==0) return 1; // base case: x^0 = 1
    if(x==0) return 0; // base case: 0^n = 0
    int ans = 1;

    while(n>0){

        if(n%2==1){
            ans = ans * x;
            n = n -1;
        }else{
            x = x * x;
            n = n/2;
        }
    }

    if(m<0) return 1/ans;
    else return ans;
}

// We can also check if the initial x was negative, in that case we just need to see 
// whether m%2==0 or 1. If 0, then power is even and number will come out to be +ve else -ve.

int main()
{
    int x, n;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a power: ";
    cin >> n;
    cout << "Result: " << power_expon(x, n) << endl;
    return 0;
}