#include <iostream>
using namespace std;
int main()
{
	int n,r,s,t,a,b,c,k,o,m;
	int ans=0;
	cin>>a;
	cin>>b;
	cin>>c;
	n=a*b*c;
	r=(a+b)*c;
	t=a+(b*c);
	s=a+b+c;
	k=a*(b+c);
	o=a*b+c;
	ans=max(max(n,r),max(s,t));
	m=max(k,o);
	cout<<max(ans,m);
}
