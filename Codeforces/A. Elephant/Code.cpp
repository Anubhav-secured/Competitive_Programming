#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#define int long long int
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int,int>>
#define mp make_pair
#define F first
#define S second
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int x;
    cin>>x;
    int ans=x/5;
    if(x%5!=0)
    {
        ans++;
    }
    cout<<ans<<endl;
    return(0);
}