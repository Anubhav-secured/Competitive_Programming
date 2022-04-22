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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return(0);
}