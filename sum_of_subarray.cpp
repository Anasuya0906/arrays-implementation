#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int b=0;
            for(int k=i;k<=j;k++)
            {
                b+=a[k];
            }
            if(b==s)
            {
                for(int k=i;k<=j;k++)
                {
                    cout<<a[k]<<" ";
                }
                cout<<"\n";
            }  
        }
    }
}