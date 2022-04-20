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
        int n,r,b ;
        cin>>n>>r>>b;
        int r_cnt = r/(b+1); 
        int extra_r=r%(b+1); 
        string ans="";
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<r_cnt;j++)
            {
                ans+='R';
            }
            if(extra_r)
            {
                ans+='R';
                extra_r--;
            }
            ans+='B';
        }
        for(int i=0;i<r_cnt;i++)
        {
            ans+='R';
        }
        cout<<ans<<endl;
    }
    return(0);
}