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
int h,p,f=0;
cin>>h>>p;
while(h && p)
{
    h=h-p;
    p=p/2;
}
if(h<=0)
{
    f=1;
}
cout<<f<<endl;
}


return 0;
}
