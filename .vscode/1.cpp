#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){


for(int i = 0; i<n-1; i++){

	for(int j = i; j<n-1; j++){

		if(arr[i]>arr[j]) swap(arr[i],arr[j]);
	}

}
}

void b_sort(int arr[], int n){

	for(int i = n-1; i>=0; i--){
		int didswap=0;
		for(int j = 0; j<i ; j++){

			if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
			didswap=1;
			
		}
		if(didswap==0) break;
	}
}

void ins_sort(int arr[], int n){

	for(int i = 0; i<=n-1; i++){
		int j=i;
		while(j>0&&arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
		j--;

	}
}


void merge(int arr[], int low, int mid, int high){

	int left = low;
	int right = mid+1;

	vector<int> temp;

	while(left<=mid && right <= high){

		if(arr[left]<arr[right]){
			temp.emplace_back(arr[left]);
			left++;
		}
		else{
			temp.emplace_back(arr[right]);
			right++;
		}

	}

	while(left<=mid){
		temp.emplace_back(arr[left]);
		left++;
	}

	while(right<=high){
		temp.emplace_back(arr[right]);
		right++;
	}

	for(int i = low; i<=high; i++){
		arr[i]=temp[i-low];
	}
}

void mergeSort(int arr[], int low, int high){

if(low>=high) return;

int mid = ((low + high)/2);

mergeSort(arr, low,  mid);
mergeSort(arr, mid+1, high);

merge(arr, low, mid, high);

}

int qk(int arr[], int low, int high){

int pivot = arr[low];
int i = low;
int j = high;

while(i<j){

	while(arr[i]<=pivot && i<high) i++;
	while(arr[j]>pivot && j>low) j--;
	if(i<j) swap(arr[i], arr[j]);
}

swap(arr[low], arr[j]);

return j;
}


void quick(int arr[], int low, int high){

if(low<high){

	int pIndex=qk(arr, low, high);
	quick(arr, low, pIndex-1);
	quick(arr, pIndex+1, high);
}
}




int main(){

int n;
cin >> n;

int arr[n];

for(int i = 0; i <n; i++){
	int num;
 cin >> num;
    arr[i]=num;

}

quick(arr,0,n-1);


for(int i = 0; i <n; i++){
cout << arr[i] << endl;

}
return 0;

}