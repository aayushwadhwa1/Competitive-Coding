#include<bits/stdc++.h>
using namespace std;
int t;
cin>>t;
while(t--)
{
    int n,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=1;i<n;i++)
    {
        ans+=(abs(a[i]-a[i-1]));
    }
    ans-=n;
    ans++;
    cout<<ans<<endl;
}


return 0;
}
