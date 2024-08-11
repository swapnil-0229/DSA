#include <bits/stdc++.h>
using namespace std;

void twoSum(int n, vector<int> a, int target)
{

    int left = 0;
    int right = n - 1;
    sort(a.begin(), a.end());
    while (left < right)
    {
        int sum = a[left] + a[right];
        if (sum == target)
        {
             cout << "yes";
            break;
        }
        else if (sum > target) right--;
        else left++;
 
    }
    cout << "no";
}

// This above code is optimal in case we dont want to output indices of the two values of sum rather
// we just want to check if two such values exist or not.

vector<int> twoSum(vector<int>& nums, int target) {
            map<int, int> mpp;
            

        for(int i = 0; i < nums.size(); i++){
            if(mpp.find(target - nums[i])!=mpp.end()){
               
                return {i,mpp[target-nums[i]]};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
        
    }

// This function is used to output indices of both the values of sum. this uses hash map to store indivces so time complexity is 
// O(n * log n) and space complexity is also O(n). using unordered map can be helpful.

int main()
{
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int t;
    cin >> t;

twoSum(n, arr, t);

}