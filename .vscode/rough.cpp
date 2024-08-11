#include <bits/stdc++.h>
using namespace std;
// Brute Approach.

void markRow(int i, int m)
{
    for (int j = 0; j < m; j++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void markColumn(int j,int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i][j] != 0)
        {
            arr[i][j] = -1;
        }
    }
}

void zero(vector<vector<int>> &arr, int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                markRow(i);
                markColumn(j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }
}

void zero1(vector<vector<int>> &arr, int n, int m)
{

    int column[m] = {0};
    int row[n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || column[j] == 1)
            {
                arr[i][j] == 0;
            }
        }
    }
}

void zero2(vector<vector<int>> &arr, int n, int m)
{

    // row[]  =  matrix[i][..]
    // column[] = matrix[..][j]
    int col1 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (matrix[i][j] == 0)
            {

                matrix[i][0] == 0;

                if (j != 0)
                {
                    matrix[0][j] == 0;
                }
                else
                {
                    col1 = 0;
                }
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if(matrix[i][j]!=0){
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
            }
        }
    }

    if(matrix[0][0]==0){
        for (int j = 0; j < m; j++) matrix[0][j] = 0;
    }
    
    if (col1 == 0){
        for (int i = 0; i < n; i++) {
            matrix[i][0]==0;
        }
    }    
   
}

int main()
{
}



int findFloor(vector<long long> &v, long long n, long long x) {
        
    int low = 0;
    int high = n - 1;
    return sch(v, low, high, x);
}

int sch(vector<int>& v, int low, int high, int x) {
    long long res = -1;
    long long min_n = 0;
    long long mid =(low + high)/ 2;

    if (v[mid] == x) {
        return mid;
    }else if(v[mid]>x){        
        return sch(v, low, mid - 1, x);
    }else{
        if(v[mid]<x && v[mid]>min_n){
            res = mid;
            min_n = v[mid];
        }
        return sch(v, mid + 1, high, x);
    }

    return res;
}