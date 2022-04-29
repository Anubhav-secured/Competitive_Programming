#include <bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>
#define mp make_pair
const int N = 1e5 + 10;
using namespace std;

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin>>s;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '7' || s[i] == '4')
			cnt++;
	}
	// since maxm no is 10^18  so no of digits <=18 only two lucky no is there that is less than 18
	if(cnt==7||cnt==4)
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
	return (0);
}