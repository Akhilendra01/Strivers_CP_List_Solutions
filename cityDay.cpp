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

	int n, x, y;
	cin>>n>>x>>y;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1; i<=n;i++){
		bool ok=true;
		for(int j=max(i-x, (int)1);j<i;j++)if(a[i]>=a[j]){ok=false; break;}
		if(!ok)continue;
		for(int j=i+1;j<=min(i+y, n);j++)if(a[i]>=a[j]){ok=false; break;}
		if(ok){
			cout<<i<<endl;
			return 0;
		}
	}
	
	return 0;
}