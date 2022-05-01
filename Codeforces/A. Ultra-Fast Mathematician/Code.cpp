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
	string s1,s2;
	cin>>s1>>s2;
	string ans;
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]!=s2[i])
		ans+='1';
		else 
		ans+='0';
	}
	cout<<ans<<endl;
	return(0);
}