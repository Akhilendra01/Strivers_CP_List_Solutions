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
	int cnt=0;
	while(n){
		if(n%10==4 or n%10==7)cnt++;
		n/=10;
	}
	if(cnt==4 or cnt==7)cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}