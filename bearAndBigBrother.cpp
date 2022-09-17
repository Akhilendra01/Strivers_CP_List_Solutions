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

		int a, b; cin>>a>>b;
		int y=0;
		while(a<=b){
			a*=3;
			b*=2;
			y++;
		}
		cout<<y<<endl;
		return 0;
	}