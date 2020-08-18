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
int n,k;
cin>>n>>k;
int p[n];
int temp = INT_MAX,ans=-1,f=0;
for(int i=0;i<n;i++)
{
    cin>>p[i];
    if(k>p[i])
    {
        f=1;
        int diff = k-p[i];
        if(diff%p[i]==0)
        {
            int steps = diff/p[i];
            if(steps < temp)
            {
                temp = steps;
                ans = p[i];
            }
        }
    }
}
if(f==0)
{
    cout<<-1<<endl;
}
else
    cout<<ans<<endl;
}


return 0;
}
