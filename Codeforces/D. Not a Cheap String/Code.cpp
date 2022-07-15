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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int p;
        cin>>p;
        map<int,vector<int>>m;
        int score=0;
        for(int i=0;i<s.size();i++)
        {
            score+= s[i]-'a'+1;
            m[s[i]-'a'+1].push_back(i);
        }
        while(score>p)
        {
            for(int i=26;i>=0;i--)
            {
                for(auto j:m[i])
                {
                    score-=i;
                    s[j]='.';
                    if(score<=p)
                    break;
                }
                if(score<=p)
                    break;
            }
        }
        string ans="";
        for(auto &i:s)
        {
            if(i!='.')
            ans+=i;
        }
        cout<<ans<<endl;
    }
    return(0);
}