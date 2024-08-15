#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int> &nums){
    int n = nums.size();
    int low = 0; int high = n-1;
    int pivot = -1;

    while(low<=high){
        int mid = low + (high - low) / 2;

        if(nums[mid+1]<nums[mid]){
            pivot = mid;
            return pivot;
        }else{
            if(nums[mid]>nums[0]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }

    return pivot;
}

int binarySearch(vector<int> &nums, int low, int high, int target){
    int ans = -1;

    while(low<=high){
        int mid = low + (high - low) / 2;

        if(nums[mid]==target){
            ans = mid;
            return ans;
        }else if(nums[mid]>target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

 int search(vector<int>& nums, int target){
    int k = pivot(vector<int>);
    if(k==-1) return binarySearch(nums, 0, nums.size()-1, target);

    int a = binarySearch(nums, 0, k, target);
    int b = binarySearch(nums, k+1, nums.size()-1);
    
    if(a==-1 && b == -1) return -1;
    else if(a==-1) return b;
    else return a;

    }


int main()
{
    return 0;
}