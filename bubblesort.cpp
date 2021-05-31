#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int swapped=0;//here a variable swapped is intialized to 0 to check for sorted elements
    for(int i=0;i<n-1;i++)//the loop for no of passes
    {
        for(int j=0;j<n-1-i;j++)//n-1-i is taken because after every 1st pass of swapping the larger element will get placed at last position no need to check again
        {
            if(arr[j]>arr[j+1])//if left side value is larger than right side value swap them
            {
                swap(arr[j],arr[j+1]);//swapping the elements
                swapped=1;
            }
        }
        if(swapped==0)//if the elements are already in sorted order then the above condition is failed so break the loop 
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";//printing the elements after sorting
    }
}