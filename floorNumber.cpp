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
		int n, x; cin>>n>>x;
		if(n<=2){
			cout<<"1\n";
			continue;
		}
		int s=2, e=n;
		int ans=1;
		while(s<=e){
			int f=(s+e)/2;
			int roomS=(f-2)*x+3;
			int roomE=(f-1)*x+2;
			if(n>=roomS and n<=roomE){
				ans=f;
				break;
			}
			if(roomS>n){
				e=f-1;
			}
			else if(roomE<n){
				s=f+1;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}