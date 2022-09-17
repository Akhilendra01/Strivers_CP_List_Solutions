#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

	int k, n, w;
	cin>>k>>n>>w;
	int cost=(k*w*(w+1))/2;
	if(cost<=n)cout<<0<<endl;
	else cout<<cost-n<<endl;
	
	return 0;
}