#include <bits/stdc++.h>
using namespace std;

int main()
    {

int n;
cin >> n;


int arr[n];
int hash[10]={0};

for(int i=0; i<n; i++){

    cin >> arr[i];
}

for(int i=0; i<n; i++){

    hash[arr[i]]++;
}

for(int i=0; i<=10; i++){
    cout << i << " is repeaded " << hash[i] << " times " << endl;
}

    }
