#include <bits/stdc++.h>

using namespace std;

// bring mimimum element to front and then keep moving
void sec_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i; j < n; j++)
        {

            if (arr[i] > arr[j])
            {

                swap(arr[i], arr[j]);
            }
        }
    }
}

void merge_sort(int arr[], int n)
{

    // bring maximum element to end and then keep shrinking size of inner loop

    for (int i = n - 1; i >= 1; i--)
    {
        int didswap = 0;

        for (int j = 0; j <= i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
        cout << "runs" << endl;
    }
}

void insertion_sort(int arr[], int n)
{
    // keep increasing i and j and go backward swapping elements

    for (int i = 1; i < n; i++)
    {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {

            swap(arr[j - 1], arr[j]);
            j--;
            cout << "runs "; //to check how many times loop runs.
        }
    }
}

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
}