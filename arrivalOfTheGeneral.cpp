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
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];

	int i=0, I=0;
	for(int j=1;j<n;j++){
		if(a[j]<=a[i])i=j;
		if(a[j]>a[I])I=j;
	}

	int ans=I+n-i-1;
	if(I<i)cout<<ans<<endl;
	else cout<<ans-1<<endl;
	
	return 0;
}