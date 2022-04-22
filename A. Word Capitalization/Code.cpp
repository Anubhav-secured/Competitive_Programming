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
    string s;
    cin>>s;
    if(s[0]>=97&&s[0]<=122)
    s[0]=s[0]-32;
    cout<<s<<endl;
    return(0);
}