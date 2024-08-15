#include<bits/stdc++.h>
using namespace std;

int first(vector<int> &arr, int target){
    int n = arr.size();
    int low = 0; int high = n-1;
    int first = -1;

    while(low<=high){
        int mid = low + (high - low) / 2;

        if(arr[mid]==target){
                high = mid-1;
                first = mid;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return first;
}

int last(vector<int> &arr, int target){
    int n = arr.size();
    int low = 0; int high = n-1;
    int last = n;

    while(low<=high){
        int mid = low + (high - low) / 2;

        if(arr[mid]==target){

                last = mid;
                low = mid+1;

        }
        else if(arr[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }

    }

    return last;
}

vector<int> searchRange(vector<int>& arr, int target){
    int fst = first(arr, target);
    if(fst == -1) return {-1, -1};

    int lst = last(arr, target);
    return {fst, lst};
}

int main()
{
    return 0;
}