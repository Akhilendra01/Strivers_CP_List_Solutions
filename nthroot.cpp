#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int main(int argc, char const *argv[]){
/*code*/
    int n, m;
    cin>>n>>m;
    float low=1;
    float high=n;
    float mid=low+(high-low)/2;
    while((high-low)>0.00001){
        mid=low+(high-low)/2;
        if(pow(mid,m)<n){
            low=mid;
        }
        else if(pow(mid, m)>n){
            high=mid;
        }
        else break;
    }
    cout<<mid<<endl;
    return 0;
}