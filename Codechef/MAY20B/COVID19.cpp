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
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    vector<int>affected;
    for(int i=0;i<n;i++)
    {
        int infectedPos=x[i];
        int cases=1;
        for(int j=i-1;j>=0;j--)
        {
            if(abs(infectedPos-x[j])<=2)
            {
                infectedPos=x[j];
                cases++;
            }
        }
        infectedPos=x[i];
        for(int j=i+1;j<n;j++)
        {
            if(abs(infectedPos-x[j])<=2)
            {
                infectedPos=x[j];
                cases++;
            }
        }
        affected.push_back(cases);
    }
    sort(affected.begin(),affected.end());
    cout<<affected[0]<<" "<<affected[n-1]<<endl;
}


return 0;
}
