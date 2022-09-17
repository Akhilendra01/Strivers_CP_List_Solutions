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

	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<m;j++)cout<<"#";
		}
		else{
			if((i+3)%4==0)cout<<"."; else cout<<"#";
			for(int j=1;j<m-1;j++)cout<<".";
			if((i+3)%4==0)cout<<"#"; else cout<<".";

		}
		cout<<endl;
	}
	
	return 0;
}