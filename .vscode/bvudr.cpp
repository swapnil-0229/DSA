#include <bits/stdc++.h>
using namespace std;
int sum = 0;



void fun(int i,int sum){


if(i<1){
cout << sum;
return;
};

fun(i-1,sum+i);

}



int main(){

int n;
cin >> n;

fun(n,0);


}
