#include <bits/stdc++.h>
using namespace std;

// int missingNumber(vector<int> &nums){
    
       
//         vector<int> hash(nums.size()+1, 0);

//     for(int i  = 0; i<nums.size(); i++){
//         hash[nums[i]]++;
//     }
//     int i = 0;
//     while(i <= nums.size()){
//         if(hash[i]==0){
//             break;
//         }
//         i++;
//     }


//   return i;  
//     }
    
int missingNumber(vector<int>& nums) {
    vector<int> hash(nums.size() + 1, 0);
    for (int i = 0; i < nums.size(); i++) {
        hash[nums[i]]++;
    }
    for (int i = 0; i <= nums.size(); i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
    return -1; // This line will never be reached
}
int main()
{

vector<int> nums;
nums.push_back(0);
nums.push_back(1);
nums.push_back(3);
nums.push_back(4);

int n = missingNumber(nums);



cout << n;

return 0;

}