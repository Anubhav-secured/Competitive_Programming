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
	string s;
	cin>>s;
	for(int i=0;i<k;i++)
	{
		for(int i=0;i<s.size()-1;i++)
		{
			if(s[i]=='B'&&s[i+1]=='G')
			{
				swap(s[i],s[i+1]);
				i++;
			}
		}
	}
	cout<<s<<endl;
	return(0);
}