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
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	int b[n+1];
	for(int i=1;i<=n;i++){
		b[a[i]]=i;
	}
	for(int i=1;i<=n;i++)cout<<b[i]<<" "; cout<<endl;

	
	return 0;
}