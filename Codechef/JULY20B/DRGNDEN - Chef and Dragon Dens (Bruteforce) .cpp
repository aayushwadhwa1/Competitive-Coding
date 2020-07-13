#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define sd(thapar) scanf("%d",&thapar)
#define sc(thapar) scanf("%c",&thapar)
int main(){
int n,Q;
cin>>n>>Q;
int h[n],a[n];
for(int i=0;i<n;i++)
    cin>>h[i];
for(int i=0;i<n;i++)
    cin>>a[i];
int type,p,q;

for(int i=0;i<Q;i++)
{
    cin>>type>>p>>q;
    if(type==1)
    {
        a[p-1]=q;
    }
    else
    {
        if(p==q)
        {
            cout<<a[p-1]<<endl;
        }
        else if(h[p-1]<=h[q-1])
        {
            cout<<-1<<endl;
        }
        else
        {
            p--;
            q--;
            ll maxHeight = h[p];//maxheight will be height of first pt because we can only move downwards
            ll minHeight = h[q];
            ll ans = 0,f=1;
            if(p<q)
            {
                for(int i=p+1;i<q;i++)
                {
                    if(h[i]>=maxHeight)
                    {
                        cout<<-1<<endl;
                        f=0;
                        break;
                    }
                    else
                    {
                        ll maxInRange=-1;
                        for(int j=i+1;j<q;j++)
                        {
                            if(maxInRange<h[j])
                                maxInRange=h[j];
                        }
                        if(h[i]<=minHeight || h[i]<=maxInRange)
                            continue;
                        else
                            ans+=a[i];
                    }
                }
            }
            else
            {
                for(int i=q+1;i<p;i++)
                {
                    if(h[i]>=maxHeight)
                    {
                        cout<<-1<<endl;
                        f=0;
                        break;
                    }
                    else
                    {
                        int maxInRange=-1;
                        for(int j=q+1;j<i;j++)
                        {
                            if(maxInRange<h[j])
                                maxInRange=h[j];
                        }
                        if(h[i]<=minHeight || h[i]<=maxInRange)
                            continue;
                        else
                            ans+=a[i];
                    }
                }
            }
            ans+=a[p];
            ans+=a[q];
            if(f)
                cout<<ans<<endl;
        }
    }
}
return 0;
}
