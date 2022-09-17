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
	int ans=0;
	int f=1;
	while(n-f>=0){
		ans+=(n-f)*f+1;
		f++;
	}
	cout<<ans<<endl;
	
	return 0;
}