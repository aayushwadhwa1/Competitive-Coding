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
for(int i=0;i<n;i++)
{
    cin>>p[i];
}

//5pts solution
int rem = n%4;
if(rem==2 or rem ==3)
    cout<<-1<<endl;
else{

    int times=n/2;
    cout<<times<<endl;
    for(int i=1;i<=times;i++)
    {
        cout<<i<<" "<<n-1<<" "<<n<<endl;
        if(!(i&1))
            n-=2;
    }
}
}


return 0;
}
