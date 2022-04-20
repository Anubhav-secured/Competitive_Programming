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
        int n,x;
        cin>>n>>x;
        if(x==0)
        {
            if(n%4==0)
            cout<<"Off"<<endl;
            else 
            cout<<"On"<<endl;
        }
        else if(x==1)
        {
            if(n%4==0)
            cout<<"On"<<endl;
            else 
            cout<<"Ambiguous"<<endl;
        }
        
    }
    return(0);
}