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

	int x[3];
	cin>>x[0]>>x[1]>>x[2];
	sort(x, x+3);
	cout<<x[2]-x[1]+x[1]-x[0]<<endl;
	
	return 0;
}