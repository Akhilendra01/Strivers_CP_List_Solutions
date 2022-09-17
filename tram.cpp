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

	int n; cin>>n;
	int c=0;
	int cur=0;
	for(int i=0;i<n;i++){
		int exit, enter;
		cin>>exit>>enter;
		cur+=enter-exit;
		c=max(c, cur);
	}
	cout<<c<<endl;
	
	return 0;
}