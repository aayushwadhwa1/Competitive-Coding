#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int ans=0;
    while(n)
    {
        ans+=(n%10);
        n=n/10;
    }
    return ans;
}
int main(){
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
{
    cin>>a[i]>>b[i];
}
int apts=0,bpts=0;
    for(int i=0;i<n;i++)
    {
        int ptsa=sum(a[i]);
        int ptsb=sum(b[i]);
         if(ptsa>ptsb)
         {
             apts++;
         }
         else if(ptsb>ptsa)
         {
             bpts++;
         }
            else{
                apts++;
                bpts++;
            }
    }
    if(apts==bpts)
    {
        cout<<2<<" "<<apts<<endl;
    }
    else if(apts>bpts)
    {
        cout<<0<<" "<<apts<<endl;
    }
    else
    {
        cout<<1<<" "<<bpts<<endl;
    }
}


return 0;
}
