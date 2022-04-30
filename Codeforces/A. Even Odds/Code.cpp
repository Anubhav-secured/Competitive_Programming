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
	int n,k;
	cin>>n>>k;
	n=k-ceil((double)n/2);
	if(n>0)
	cout<<2*n<<endl;
	else 
	cout<<2*k-1<<endl;
	
	return(0);	
}