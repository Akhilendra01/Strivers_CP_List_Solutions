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
	int ans=0;
	unordered_map<string, int> sides;
	sides["Tetrahedron"]=4;
	sides["Cube"]=6;
	sides["Octahedron"]=8;
	sides["Dodecahedron"]=12;
	sides["Icosahedron"]=20;
	while(n--){
		string shape;
		cin>>shape;
		ans+=sides[shape];
	}
	cout<<ans<<endl;
	return 0;
}