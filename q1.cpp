#include<iostream>
#include <bits/stdc++.h>

using namespace std;


void altArr(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i - 1] > arr[i]) {
            swap(arr[i - 1],arr[i]);
        }
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr[i + 1],arr[i]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    altArr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}