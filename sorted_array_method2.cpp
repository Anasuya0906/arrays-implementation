#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int fl=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            fl=1;
            break;
        }
    }
    if(fl==0)
       cout<<"yes sorted order";
    else
       cout<<"not in sorted order";
}
