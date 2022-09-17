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

	string s; cin>>s;
	unordered_map<char, int> mp;
	for(char c: s)mp[c]++;
	if(mp.size()%2==0)cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
	cout<<endl;
	
	return 0;
}