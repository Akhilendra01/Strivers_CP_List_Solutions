#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"


vector<int> a[3*10000+1];
bool vis[3*10000+1];

void dfs(int node){
	vis[node]=1;
	for(int child: a[node]){
		if(!vis[child]){
			dfs(child);
		}
	}
}


int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

	int n, t; cin>>n>>t;
	for(int i=1;i<=n-1;i++){
		int x; cin>>x;
		a[i].push_back(i+x);
	}
	dfs(1);
	if(vis[t])cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}