#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i; j < n; j++)
        {

            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selection_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

/* In selection sort, for the outer iteration, we consider element at arr[i] to minimum and then check if any other element
is smaller than arr[i]. If we find any smaller element, then we swap both and then we move with our outer loop and consider element arr[i+1]
as our next minimum. We keep at it till whole array is sorted
*/