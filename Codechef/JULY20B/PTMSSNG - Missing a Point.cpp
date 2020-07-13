#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
int n,ansx=0,ansy=0;
cin>>n;
for(int i=0;i<4*n-1;i++)
{
    int x,y;
    cin>>x>>y;
    ansx=ansx^x;
    ansy=ansy^y;
}
cout<<ansx<<" "<<ansy<<endl;
}


return 0;
}
