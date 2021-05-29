#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int fl=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                fl=1;
                break;
            }

        }
        if(fl==1)
        {
            cout<<"no not in sorted order";
            break;
        }
          
    }
    if(fl==0)
       cout<<"yes array is in sorted order";
}