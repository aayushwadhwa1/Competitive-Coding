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
int h,w,n;
cin>>h>>w>>n;

pair<int,int> hValAndP[h][w];
for(int i=0;i<h;i++)
{
    for(int j=0;j<w;j++)
    {
        cin>>hValAndP[i][j].first;
        hValAndP[i][j].second=0;
    }
}
int x[n],y[n],p[n];
for(int i=0;i<n;i++)
{
    cin>>x[i]>>y[i]>>p[i];
    x[i]--;
    y[i]--;

    int r=x[i],c=y[i];
    hValAndP[r][c].second=p[i];
}
//find every permutation of n using bitmasking and find value, then choose the max
int ans=INT_MIN;
string finalString;
for(int i=0;i<(1<<n);i++)
{
    string s="";
    int temp = i;
    int p=n-1;
    int currAns=0;
    while(temp)
    {
        hValAndP[x[p]][y[p]].second = abs(hValAndP[x[p]][y[p]].second);
        if(temp&1)
        {
            hValAndP[x[p]][y[p]].second = -1 * hValAndP[x[p]][y[p]].second;

            s = '1' + s;
        }
        else
        {
            s = '0' + s;
        }
        temp=temp>>1;
        p--;
    }

    for(int i=0;i<n;i++)
    {
        int xi = x[i];
        int yi = y[i];
        bool check=0;
        currAns+= hValAndP[xi][yi].second * hValAndP[xi][yi].first;

        //bottom
        if(xi+1<h)
        {
            //cout<<"bottom"<<endl;
            currAns+= ((hValAndP[xi][yi].second)*(hValAndP[xi+1][yi].second));
        }

        //right
        if(yi+1<w)
        {
            //cout<<"right"<<endl;
            currAns+= ((hValAndP[xi][yi].second)*(hValAndP[xi][yi+1].second));
        }
    }
    if(currAns>ans)
    {
        ans=currAns;
        finalString=s;
    }
}
cout<<ans<<endl;
int l=finalString.length();
for(int i=0;i<(n-l);i++)
{
    cout<<1<<" ";
}
for(int i=0;i<l;i++)
{
    if(finalString[i]=='0')
        cout<<1<<" ";
    else cout<<-1<<" ";
}
cout<<endl;
}


return 0;
}
