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

	string s;
	vector<int> n;
	cin>>s;
	for(char c: s){
		if(c=='+')continue;
		else n.push_back(c-'0');
	}
	sort(n.begin(), n.end());
	string ans="";
	for(int i: n)ans+=to_string(i)+"+";
	cout<<ans.substr(0, ans.length()-1);
	return 0;
}