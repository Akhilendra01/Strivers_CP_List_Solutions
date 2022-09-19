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
		string a, b; cin>>a>>b;
		unordered_map<char, int> mp;
		if(a.length()>b.length()){
			cout<<"NO\n";
			continue;
		}
		sort(a.begin(), a.end());
		bool ok=false;
		for(int i=0;i<b.length()-a.length()+1;i++){
			string s=b.substr(i, a.length());
			sort(s.begin(), s.end());
			if(s==a){
				ok=true;
				break;
			}
		}
		cout<<(ok?"YES":"NO")<<endl;
	}
	return 0;
}