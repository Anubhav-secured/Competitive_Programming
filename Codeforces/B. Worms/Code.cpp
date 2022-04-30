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
	vi v(n+1,0),psum(n+1,0);
	
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
		psum[i]=psum[i-1]+v[i];
	}
	int q;
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		int x;
		cin>>x;
		int k=lower_bound(psum.begin(),psum.end(),x)-psum.begin();
		cout<<k<<endl;
	}
	return(0);
}