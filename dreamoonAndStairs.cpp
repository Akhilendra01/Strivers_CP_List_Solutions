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

	int n, m; cin>>n>>m;
	int twos=n/2;
	int ones=n%2;
	int jumps=ones+twos;
	int k=(jumps/m+1)*m-jumps;
	if(k==m)k=0;
	if(k==0)cout<<jumps<<endl;
	else{
		if(twos<k)cout<<-1<<endl;
		else cout<<jumps+k<<endl;
	}
	
	return 0;
}