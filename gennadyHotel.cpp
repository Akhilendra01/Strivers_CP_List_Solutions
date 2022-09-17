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

	string s;	cin>>s;
	string cards[5];
	for(int i=0;i<5;i++)cin>>cards[i];

	bool ok=false;
	
	for(int i=0;i<5;i++){
		if(s[0]==cards[i][0] or s[1]==cards[i][1]){
			ok=true;
			break;
		}
	}
	cout<<(ok?"YES":"NO")<<endl;
	
	return 0;
}