#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{

    vector<int> temp;

    int left = low;
    int right = mid + 1;
    
    // cout << mid ;

    while (left <= mid && right <= high)
    {

        if (arr[left] <= arr[right])
        {

            temp.push_back(arr[left]);
            left++;
        }
        else
        {

            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high)
{

    if (low == high)
    {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);

    mergeSort(arr, mid + 1, high);
    cout << low;
    

    merge(arr, low, mid, high);
}

int main()
{

    vector<int> arr;

    // Here n is thg size of the array which we wanna make
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    // arr.push_back(16);
    // arr.push_back(8);
    // arr.push_back(7);
    // arr.push_back(9);
    // arr.push_back(4);
    // arr.push_back(1);

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}