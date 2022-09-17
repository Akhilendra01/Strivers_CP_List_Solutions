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
	int s=1, e=2*sqrt(n);
	int ans=0;
	while(s<=e){
		int mid=(s+e)/2;
		int val=mid*(mid+1)*(2*mid+1)/6+mid*(mid+1)/2;
		val/=2;
		if(val<=n){
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}