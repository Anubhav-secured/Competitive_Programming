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
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        if(m.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
        else 
        cout<<"IGNORE HIM!"<<endl;

    return(0);
}