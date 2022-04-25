#include<bits/stdc++.h>
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
    string s;
    cin>>s;
    if(s.find("0000000")!=-1||s.find("1111111")!=-1)
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
    return(0);
}