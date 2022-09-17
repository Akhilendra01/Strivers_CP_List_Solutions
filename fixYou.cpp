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
		int n, m;
		cin>>n>>m;
		char a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)cin>>a[i][j];
		}
		int cnt=0;
		for(int i=0;i<n-1;i++)if(a[i][m-1]=='R')cnt++;
		for(int i=0;i<m-1;i++)if(a[n-1][i]=='D')cnt++;
		cout<<cnt<<endl;
	}
	
	return 0;
}