#include <bits/stdc++.h>

using namespace std;

void checkPair(int arr[], int s,int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
    {
        if (map.find(s - arr[i]) != map.end())
        {
            cout << "Pair found (" << arr[map[s - arr[i]]] << ", "
                 << arr[i] << ")\n";
            return;
        }
        map[arr[i]] = i;
    }
    cout << "Pair not found";
}
int main()
{
    int n;
    cout<<"enter the length of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elments:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cout<<"enter the sum:";
    cin>>sum;
    
    checkPair(arr,sum,n);

    return 0;
}