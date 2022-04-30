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
	while(true)
	{
		n++;
		int a=n/1000;
		int b=(n/100)%10;
		int c=(n/10)%10;
		int d=n%10;
		if(a==b||a==c||a==d||b==c||b==d||c==d)
		continue;
		else
		{
			cout<<n<<endl;
			break;
		}
	}
	return(0);
}