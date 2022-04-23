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
const int N = 1e5+10;
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a<=b)
    {
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt<<endl;
    return(0);
}