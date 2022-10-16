#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,c=0,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            c++;
        }
    }
    cout<<c;
}