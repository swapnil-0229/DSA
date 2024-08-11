#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    /*divide and conquer i.e. select a pivot, put it in its desired place and all elements to left 
    of pivot should be less than pivot and to right should be greater than pivot */
    
    int pivot = arr[low];

    int i = low;
    int j = high;

    while (i < j)
    {

        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{

    if (low < high)
    {
        int pindex = partition(arr, low, high);
        quickSort(arr, low, pindex - 1);
        quickSort(arr, pindex + 1, high);
    }
}

int main()
{

    int n;
    cout << "Enter the size of array";
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.emplace_back(num);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}