#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
int k;
cin>>k;
char a[8][8];
int fullX=(int)ceil(k/8);
if(k%8==0)
    fullX=k/8 -1;
for(int i=0;i<8;i++)
{
    for(int j=0;j<8;j++)
    {
        if(j-1==fullX)
        {
            a[i][j]='X';
        }
        else a[i][j]='.';
    }
}
int fillThisMuch=k%8;
if(fillThisMuch)
{
    for(int i=0;i<8;i++)
    {
        if(i>=fillThisMuch)
        {
            a[i][fullX]='X';
        }
    }
}
a[0][0]='O';
for(int i=0;i<8;i++)
{
    for(int j=0;j<8;j++)
    {
        cout<<a[i][j];
    }
    cout<<endl;
}
}


return 0;
}
