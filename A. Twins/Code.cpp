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
	vi v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int tsum=accumulate(v.begin(),v.end(),0);
	sort(v.begin(),v.end());
	int cnt=0,sum=0,i=n-1;
	// for(int i=n-1;i>=0;i--)
	// {
	// 	sum+=v[i];
	// 	cnt++;
	// 	v.pop_back();
	// 	if(sum>tsum-sum)
	// 	break;
	// }
	while(sum<=tsum-sum)
	{
		sum+=v[i];
		cnt++;
		i--;
	}
	cout<<cnt<<endl;
	return(0);
}