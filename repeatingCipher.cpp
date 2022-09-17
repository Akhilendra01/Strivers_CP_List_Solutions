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
    string ans="";
    int i=0, len=0;
    while(i<n){
    	ans+=s[i];
    	len++;
    	i=len*(len+1)/2;
    }
    cout<<ans<<endl;	
	
	return 0;
}