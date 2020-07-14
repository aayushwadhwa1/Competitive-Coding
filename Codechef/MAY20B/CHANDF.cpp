#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
#define sd(thapar) scanf("%d",&thapar)
#define sc(thapar) scanf("%c",&thapar)
int logBase2(int n)
{
    int ans=0;
    while(n)
    {
        n=n>>1;
        ans++;
    }
    return ans;
}
int main(){
int t;
sd(t);
while(t--)
{
    ll x,y,l,r;
    cin>>x>>y>>l>>r;
  /* 15 pts solution
  if(l==0 and r>=2*max(x,y))
  {
      if(x==0 or y==0)
        cout<<0<<endl;
    else
        cout<<(x|y)<<endl;
  }
    else{*/
        int cycle = 1<<((logBase2(max(x,y)) + 1)-1);
        cout<<cycle<<endl;

}


return 0;
}
