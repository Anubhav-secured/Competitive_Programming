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
	int cnt=0,j=0;
	string b="hello";
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==b[j])
		{
			j++;cnt++;
			if(cnt==5)
			break;
		}
	}
	cout<<(cnt==5?"YES":"NO")<<endl;
	return(0);
}