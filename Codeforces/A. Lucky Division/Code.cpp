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
	if(n%4==0||n%7==0||n%47==0||n%74==0||n%447==0||n%474==0||n%477==0||n%747==0||n%774==0)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
	return(0);
}