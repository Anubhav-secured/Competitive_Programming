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
	int n;
	cin>>n;
	int cnt=0;
	vector<string>v;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		if(v.empty())
		{
			v.push_back(s);
			cnt++;
		}
		else
		{
			if(s!=v.back())
			++cnt;
			v.push_back(s);
		}
	}
	cout<<cnt<<endl;
	return(0);
}