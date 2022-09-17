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
		int a, b, c; cin>>a>>b>>c;
		if(a<c)cout<<1; else cout<<-1;
		cout<<" ";
		if(c<b*a)cout<<b; else cout<<-1;
		cout<<endl;
	}
	
	return 0;
}