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
	int row=2*n-1;

	for(int i=1;i<=n+1;i++){
		for(int sp=1;sp<=n+1-i;sp++)cout<<"  ";
		int j=0;
		for(;j<i;j++)cout<<j<<" ";
		for(j-=2;j>=0;j--)cout<<j<<" ";
		cout<<endl;
	}

	for(int i=n;i>=1;i--){
		for(int sp=1;sp<=n+1-i;sp++)cout<<"  ";
		int j=0;
		for(;j<i;j++)cout<<j<<" ";
		for(j-=2;j>=0;j--)cout<<j<<" ";
		cout<<endl;
	}
	
	return 0;
}