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
        int x,y,ans;
        cin>>x>>y;
        ans=abs(y-x);
        cout<<ans<<endl;
    }
    return(0);
}
