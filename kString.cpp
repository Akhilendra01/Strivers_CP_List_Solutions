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
	string s; cin>>s;
	int f=s.length();

	unordered_map<char, int>mp;
	
	for(char c: s)mp[c]++;
	for(char c: s)if(mp[c]%n!=0){cout<<-1<<endl; return 0;}
	string w="";
	for(pair<char, int> p: mp)w+=p.first;
	// cout<<w<<" "<<f<<endl;
	string word="";
	for(char c: w){
		int len=mp[c]/n;
		while(len--)word+=c;
	}
	string ans="";
	for(int i=0;i<f/word.length();i++)ans+=word;
	cout<<ans<<endl;
	
	return 0;
}