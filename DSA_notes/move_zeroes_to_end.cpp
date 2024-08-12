#include <bits/stdc++.h>
using namespace std;

void moveZerosToEnd(int arr[], int n)
{

    int j = -1;
    // this loop takes us to first zero
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
    {
        return;
    }

    for (int i = j + 1; i < n; i++)
    {

        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

// Tc O(N)
//  Sc O(1)

int main()
{

    cout << "Enter the size of array ";

    int n;
    cin >> n;
    int arr[n];
    cout << endl
         << "Enter the elements of array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array before shifting" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    moveZerosToEnd(arr, n);

    cout << endl
         << "Array after shifting" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}