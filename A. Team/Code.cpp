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
    int t,cnt=0;
    cin>>t;
    while(t--)
    {
        int a,b,c; 
        cin>>a>>b>>c; 
        if(a==1&&b==1||b==1&&c==1||c==1&&a==1)
        cnt++;
    }
    cout<<cnt<<endl;
    return(0);
}