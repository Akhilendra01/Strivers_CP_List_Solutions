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

	int n; 		cin>>n;
	string s;	cin>>s;

	bool ok=false;
	for(int i=0;i<n-1;i++){
		if(s[i]!=s[i+1]){
			ok=true;
			cout<<"YES\n";
			cout<<s[i]<<s[i+1]<<endl;
			break;
		}
	}
	if(!ok)cout<<"NO\n";

	
	return 0;
}