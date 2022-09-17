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
	int b=0;
	while(n--){
		string op;
		cin>>op;
		bool add=true;
		if(op[0]=='-' or op[1]=='-' or op[2]=='-')add=false;
		if(add)b++;
		else b--;
	}
	cout<<b<<endl;
	
	return 0;
}