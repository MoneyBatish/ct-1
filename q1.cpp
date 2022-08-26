//Name=Money Batish
//Roll No=2010990465
//set=3
//question 1
#include<iostream>
#include <bits/stdc++.h>

using namespace std;


void swapArr(int arr[], int n)
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
    cout<<"enter the length of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    swapArr(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
