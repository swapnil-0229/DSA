#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    int low = 1; int high = n-2;

    if(n == 1) return nums[0];
    
    // basic condition checks to not make code look messy.

    if(nums[low-1]!=nums[low]) return nums[low-1];
    if(nums[high+1]!=nums[high]) return nums[high+1];

    while(low<=high){

        int mid = low + (high - low)/2;

        // this is used when elements to both side of the mid are not equal to mid i.e. we found the single element.

        if(nums[mid+1]!=nums[mid] && nums[mid-1]!=nums[mid]){
            return nums[mid];
        }

        // Here we see whether we are left to the single element or right to the single element and 
        // by using this condition, we find that out using (even, odd) index of duplicates to left and 
        // (odd, even) indexes to the right. This way, we find out about whether the lement is to right
        // or to left and eliminate the respective half which does not contain element.

        if((nums[mid]==nums[mid-1]) && (mid%2==0 && (mid-1)%2==1) || (nums[mid]==nums[mid+1]) && (mid%2==1 && (mid+1)%2==0)){
            high = mid -1;
        }else{
            low = mid +1;
        }
    }

    return -1;
    
    }


int main()
{
    return 0;
}