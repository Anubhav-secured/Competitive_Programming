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
	cout<<"I hate ";
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		cout<<"that I love ";
		else 
		cout<<" that I hate ";
	}
	cout<<"it";
	return(0);
}