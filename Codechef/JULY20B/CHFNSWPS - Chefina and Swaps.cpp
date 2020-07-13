#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
ll f=0,minGlobal=INT_MAX;
ll n;
cin>>n;
ll a[n],b[n];
unordered_map<ll,ll>counta;
unordered_map<ll,ll>countb;
unordered_set<ll> s;
for(ll i=0;i<n;i++)
{
    cin>>a[i];
    s.insert(a[i]);
    f=f^a[i];
    counta[a[i]]++;
    if(minGlobal>a[i])
        minGlobal=a[i];
}
for(ll i=0;i<n;i++)
{
    cin>>b[i];
    s.insert(b[i]);
    f=f^b[i];
    countb[b[i]]++;
    if(minGlobal>b[i])
        minGlobal=b[i];
}
if(f!=0)
{
    cout<<-1<<endl;
    continue;
}
vector<ll>lis;
for(auto x:s)
{
    ll cntreqd=abs(counta[x]-countb[x])/2;
    for(ll p=0;p<cntreqd;p++)
    {
        lis.push_back(x);
    }
}
ll ans=0;
sort(lis.begin(),lis.end());
ll l=lis.size();
for(ll i=0;i<l/2;i++)
{
    if(lis[i]>min(minGlobal,lis[i])+min(minGlobal,lis[l-i-1]))
        ans+=(min(minGlobal,lis[i])+min(minGlobal,lis[l-i-1]));
    else
        ans+=lis[i];
}
cout<<ans<<endl;
}


return 0;
}
