#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
#define sd(thapar) scanf("%d",&thapar)
#define sc(thapar) scanf("%c",&thapar)
int ceilby9(int n)
{
    if(n%9==0)
        return n/9;
    else return n/9 + 1;
}
int main(){
int t;
sd(t);
while(t--)
{

int pc, pr,f=0;
cin>>pc>>pr;

int chefDig = ceilby9(pc);
int rickDig = ceilby9(pr);

if(chefDig==rickDig)
{
    f=1;
}
else if(chefDig>rickDig)
{
    f=1;
}
else f=0;
cout<<f<<" ";
if(f)
    cout<<rickDig<<endl;
else
    cout<<chefDig<<endl;
}


return 0;
}
