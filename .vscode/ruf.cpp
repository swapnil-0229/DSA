#include<bits/stdc++.h>
using namespace std;

int sch(vector<int> &arr, int low, int high, int target){

    int mid;
   

    while(low <= high){

        mid = (low + high)/2;
        
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            return sch(arr, low, mid, target);
        }
        else{
            return sch(arr, mid + 1, high, target);
        }
    }

    return -1;

}

int binarySearch(vector<int> &arr, int target){
    int low = 0;
    int high = arr.size()-1;
   
    int index = sch(arr, low, high, target);
    return index;  
}


int main()
{

int n;
cin >> n;
vector<int> arr;

for(int i = 0; i < n; i++){
    int num;
    cin >> num;
    arr.emplace_back(num);
}
int t;
cin >> t;

int result = binarySearch(arr, t);

cout << result;

}