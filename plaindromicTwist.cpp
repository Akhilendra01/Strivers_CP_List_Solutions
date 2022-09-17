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
		int n; cin>>n;
		string s; cin>>s;
		bool ok=true;
		for(int i=0;i<n/2;i++){
			if(s[i]==s[n-i-1])continue;
			else{
				char x=s[i], y=s[n-i-1];
				if(!(x+1==y-1 or x-1==y+1)){
					ok=false;
					break;
				}	
			}
		}		
		cout<<(ok?"YES":"NO")<<endl;
	}
	
	return 0;
}