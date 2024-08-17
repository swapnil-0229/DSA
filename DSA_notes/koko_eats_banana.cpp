#include<bits/stdc++.h>
using namespace std;

int maxEl(vector<int>& piles){
        int maxi = INT_MIN;
        for(int i = 0; i < piles.size(); i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long totalHrs(vector<int>& piles, int mid){
        long long th = 0;
        for(int i = 0; i < piles.size(); i++){
            th = th + ceil((double)piles[i]/(double)mid);
        }
        return th;
    }

    int minEatingSpeed(vector<int>& piles, int h){
        int low = 1; long long high = maxEl(piles);
        while(low <= high){
            int mid =low + (high - low)/2;
            long long th = totalHrs(piles, mid);
            if(th<=h){
                high = mid - 1;
            }else{
                low = mid + 1; 
            }  
        }
        return low;
    }

int main()
{
    vector<int> v = {805306368,805306368,805306368};
    int h = 1000000000;
    int ans = minEatingSpeed(v, h);
    cout << "Koko should eat atleast " << ans << " bananas/hr.\n";
    return 0;
}