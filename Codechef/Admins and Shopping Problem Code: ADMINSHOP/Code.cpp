#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int,int>>
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vi v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int mini=*min_element(v.begin(),v.end());
        int ans=x/mini;
        if(x%mini!=0)
        {
            ans++;
        }
        cout<<max(ans,n)<<endl;
    }
    return(0);
}