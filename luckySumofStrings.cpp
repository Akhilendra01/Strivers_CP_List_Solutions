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
	if(n<7 and n!=4){
		cout<<"-1\n";
		return 0;
	}

	int f[]={0, 1, 2, 3, 0, 1, 6};
	int k=n%7;
	int sevens=n/7-f[k];
	string ans1="";
	if(sevens>=0){
		int fours=(k+f[k]*7)/4;
		while(fours-7>=0){
			fours-=7;
			sevens+=4;
		}
		while(fours--)ans1+='4';
		while(sevens--)ans1+='7';
	}
	if(ans1.length()==0)cout<<-1<<endl;
	else cout<<ans1<<endl;
	
	return 0;
}