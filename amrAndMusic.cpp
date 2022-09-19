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

	int n, k; cin>>n>>k;
	vector<pair<int, int>> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first;
		v[i].second=i+1;
	}
	sort(v.begin(), v.end());
	int i=0;
	while(k>=v[i].first and i<n){
		k-=v[i].first;
		i++;
	}
	cout<<i<<endl;
	for(int j=0;j<i;j++)cout<<v[j].second<<" ";
	return 0;
}