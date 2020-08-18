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
string s,p;
cin>>s>>p;
int cond=0;
int cs[26] = {0}, cp[26] = {0};
int ls = s.length();
int lp = p.length();

for(int i=0;i<ls;i++)
{
    cs[s[i]-'a']++;
}

for(int i=0;i<lp;i++)
{
    if(p[i]<p[0])
    {
        cond=1;
    }
    cp[p[i]-'a']++;
}
int f=1;
for(int i=0;i<26;i++)
{
    if(cs[i]<cp[i])
    {
        f=0;
        break;
    }
    else
    {
        cs[i]=cs[i]-cp[i];
    }
}
if(f==1)
{
    for(int i=0;i<26;i++)
    {
        if(i==(p[0]-'a'))
        {
            if(lp>1)
            {
                if(cond)
                {
                    cout<<p;
                    for(int j=0;j<cs[i];j++)
                    {
                        cout<<char(i+'a');
                    }
                }
                else
                {
                    for(int j=0;j<cs[i];j++)
                    {
                        cout<<char(i+'a');
                    }
                    cout<<p;
                }
            }
            else
                cout<<p[0];
        }
        else
        {
            for(int j=0;j<cs[i];j++)
            {
                cout<<char(i+'a');
            }
        }
    }
}
cout<<endl;
}


return 0;
}
