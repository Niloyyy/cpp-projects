#include<bits/stdc++.h>
using  namespace  std;


// PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int i,j;
        int mn=INT_MAX;
        for(int k=0;k<n-1;k++)
        {
            if(ar[k+1]-ar[k] < mn)
            {
                mn=ar[k+1]-ar[k];
                i=k;
                j=k+1;
            }
        }
        if(n==2)
        {
            cout<<ar[0]<<" "<<ar[1]<<endl;
        }
        else
        {
            for(int l=j;l<n;l++)cout<<ar[l]<<" ";
            for(int l=0;l<=i;l++)cout<<ar[l]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
