#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
#define sd(thapar) scanf("%d",&thapar)
#define sc(thapar) scanf("%c",&thapar)
int main(){
int t;
sd(t);
while(t--)
{
int n,m;
cin>>n>>m;

int p[n+1],fArray[n+1],num[n+1];
for(int i=1;i<=n;i++)
{
    cin>>p[i];
    fArray[p[i]]=i;
    num[i]=i;
    p[i]=i;
}
int x,y;
while(m--)
{
    cin>>x>>y;
}
int ans=0;
for(int i=1;i<=n;i++)
{
    //cout<<"*************For i ="<<i<<"**********"<<endl;
    if(num[i]!=fArray[i])
    {
        int pos = p[fArray[i]];
        //swap num[i] and num[pos]
        int temp=num[pos];
        num[pos]=num[i];
        num[i]=temp;
        //update position
        p[num[pos]] = pos;
        p[fArray[i]] = i;
        ans++;
    }
    /*cout<<"Updated array is"<<endl;
    for(int j=1;j<=n;j++)
    {
        cout<<num[j]<<" ";
    }
    cout<<endl;
    cout<<"Position array"<<endl;
    for(int j=1;j<=n;j++)
    {
        cout<<p[j]<<" ";
    }
    cout<<endl;
    */
}
cout<<ans<<endl;
}


return 0;
}
