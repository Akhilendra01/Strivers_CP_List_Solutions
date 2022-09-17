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
		string s; cin>>s;
		int l=0, r=s.length()-1;
		while(s[l]=='0')l++;
		while(s[r]=='0')r--;
		if(l>r){
			cout<<"0\n";
			continue;
		}
		int cnt=0;
		for(int i=l+1;i<r;i++)if(s[i]=='0')cnt++;
		cout<<cnt<<endl;
	}
	
	return 0;
}