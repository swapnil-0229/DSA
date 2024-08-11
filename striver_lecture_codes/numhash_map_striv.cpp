#include <bits/stdc++.h>
using namespace std;

int main(){

int n; 
cin >> n; 
int arr[n];
for(int i=0; i<n; i++){
    cin >> arr[i];
}

map<int, int> mpp;

for(int i=0; i<n; i++){
    mpp[arr[i]]++;
}



// to iterate in the map
// for(auto it:mpp){
//     cout << it.first << "->" << it.second << endl;
// }


// to find value of a particular element
int q;
cin >> q;
while(q--){
    int num;
    cin >> num;

    cout << num << " is repeated " << mpp[num] << " times " << endl;
}

}