#include <bits/stdc++.h>
using namespace std;


void shiftElements(int arr[], int d, int n){ 

int temp[d];

for(int i=0; i<d; i++){
    temp[i] = arr[i];
}

for(int i = d; i<n; i++){
    arr[i - d] = arr[i]; 
}


for(int i = n-d; i<n; i++){
    arr[i] = temp[i - (n-d)];
    
}

}
/*
Have time complexity of O(d) + O(n - d) + O(d) = O(n+d) 
Also , have space complexity of O(d) as we are using a temp arr of size d
*/ 
void ShiftElementsOptimised(int arr[], int d, int n){
    reverse(arr, arr+d); // O(d) tc
    reverse(arr + d, arr +n); // O(n-d) tc
    reverse(arr, arr+n); // O(n) tc 
}
/*
have a little more time complexity of O(2n)
but have better sc as no more space is being used i.e. O(1)
*/

int main(){

cout << "Enter the size of array " ;

int n;
cin >> n;
int arr[n];
cout << endl << "Enter the elements of array " << endl;
for(int i=0; i<n; i++){
    cin >> arr[i];
}
cout << endl;

cout << "Enter the no of places by which to shift array " ;
int d;
cin >> d;

d=d%n;

cout << endl;
cout << "Array before shifting" << endl;

for(int i=0; i<n; i++){
    cout << arr[i] << " ";
}

shiftElements(arr, d, n);

cout << endl << "Array after shifting" << endl;

for(int i=0; i<n; i++){
    cout << arr[i] << " ";
}


}