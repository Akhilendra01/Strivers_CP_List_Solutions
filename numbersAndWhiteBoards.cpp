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
		int n; cin>>n;
		int i=n-3, j=n-1;
		cout<<"2\n";
		if(n==2){
			cout<<1<<" "<<2<<endl;
			continue;
		}
		cout<<n-2<<" "<<n<<endl;
		cout<<n-1<<" "<<n-1<<endl;
		while(j>=3){
			cout<<i<<" "<<j<<endl;
			i--;
			j--;		
		}	
	}
	
	return 0;
}