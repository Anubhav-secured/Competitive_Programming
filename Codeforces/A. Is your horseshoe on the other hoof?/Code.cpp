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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	set<int>s={a,b,c,d};
	cout<<4-s.size()<<endl;
	// vi v(4);
	// map<int,int>m;
	// for(int i=0;i<4;i++)
	// {
	// 	cin>>v[i];
	// 	m[v[i]]++;
	// }
	// cout<<4-m.size()<<endl;
	return(0);
}
