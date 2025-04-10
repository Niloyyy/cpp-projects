// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int f[n];f[0]=a[0];
    for(int i=1;i<n;i++)
    {
        f[i]=a[i]+f[i-1]-1;
    
    }
    for(int i=1;i<n;i++)cout<<f[i]<<" ";
}