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
    int upper=0,lower=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            upper++;
        }
        if(s[i]>=97&&s[i]<=122)
        {
            lower++;
        }
    }
    if(upper==lower||lower>upper)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }
    else if (upper>lower)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    cout<<s<<endl;
    return(0);
}