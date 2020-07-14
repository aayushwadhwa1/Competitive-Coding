#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
#define sd(thapar) scanf("%d",&thapar)
#define sc(thapar) scanf("%c",&thapar)
int main(){
    ll t;
    sd(t);
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        ll cnt[26]={0};
        for(char c:s)
        {
            cnt[c-97]++;
        }
        for(ll i=0;i<q;i++)
        {

            ll c,ans=0;
            cin>>c;

            for(ll i=0;i<26;i++)
            {
                if(cnt[i]>c)
                {
                    ans+=(cnt[i]-c);
                }
            }
            cout<<ans<<endl;
        }


    }


    return 0;
}
