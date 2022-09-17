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
    	int n=s.length();
    	int c=s[0]-'0';
    	int keys=(c-1)*10+n*(n+1)/2;
    	cout<<keys<<endl;	
    }
	
	return 0;
}