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

	int t; cin>>t;
	while(t--){
		int a, b, n;
		cin>>a>>b>>n;
		if(a<b)swap(a, b);
		int ops=0;
		while(a<=n){
			b+=a;
			swap(a, b);
			ops++;
		}
		cout<<ops<<endl;
	}
	
	return 0;
}