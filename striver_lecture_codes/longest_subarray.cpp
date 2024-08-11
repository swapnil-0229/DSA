#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &a, long long k){

map<long long,int> presum;
long long sum = 0;
int maxLen = 0;

for(int i = 0; i<a.size(); i++){
    sum+=a[i];
    if(sum==k){
        maxLen = max(maxLen, i+1);
    }

long long rem = sum - k;


    if(presum.find(rem)!=presum.end()){
        int len = i - presum[rem];

        maxLen = max(maxLen, len);
    }
        if(presum.find(sum) != presum.end())
    presum[sum]=i;
}

return maxLen;

}

// this above code is better solution for positives and zer case but optimal for negatives case

int longestSubarray(vector<int> &a, long long k){

int right = 0;
int left = 0;
int maxLen = 0;
long long sum = a[0];
int n = a.size();

while(right<n){

    while(left<= right && sum>k){
        sum-= a[left];
        left++;
    }
    if(sum == k){
        maxLen = max(maxLen ,right - left + 1);

    }
    right ++;
    if(right<n) sum +=a[right];
}

return maxLen;

}

// this above code is optimal for zero and positives case

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

int k;
cin >> k;

int len = longestSubarray(arr,k);

cout << len;


}