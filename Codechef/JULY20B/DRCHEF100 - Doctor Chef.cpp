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
ll n;
double cures;
cin>>n>>cures;
double pop[n];;
for(ll i=0;i<n;i++)
{
    cin>>pop[i];
}
sort(pop,pop+n);
int addit=0,f=0,ans=0;
//f==1 when cures are less than minimum populated country
if(pop[0]>=cures)
    f=1;
//when cures are greater than highest populated country than it will take n days
if(cures>=pop[n-1])
{
    cout<<n<<endl;
    continue;
}
for(int i=0;i<n;i++)
{
    if(f==1)
    {
        int x = ceil(log2(pop[i]/cures));
        if(x<0)
            x=0;
        ans=ans+1+x;
        cures=2*pop[i];
    }
    else
    {
        //cout<<"hi"<<endl;
        if(2*pop[i]>cures or f==2)
        {
            f=2;
            int x = ceil(log2(pop[i]/cures));
            if(x<0)
                x=0;
            ans=ans+1+x;
            cures=2*pop[i];
        }
        else
        {
            addit++;
        }
    }
}
cout<<ans+addit<<endl;
}


return 0;
}
