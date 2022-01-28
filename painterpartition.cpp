#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef long long ll;

bool isPossible(int time, vector<int> &v, int a){
    int sum=0;
    int painters=1;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum>time){
            painters++;
            if(painters>a)return false;
            sum=v[i];
        }
    }
    return true;
}

int paint(int A, int B, vector<int> &C) {
    int low=INT_MIN;
    int high=0;
    int ans=-1;
    for(int i=0;i<C.size();i++){
        high+=C[i];
        if(low<C[i])low=C[i];
    }

    while(low<=high){
        int mid=low+(high-low)/2;
        if(isPossible(mid, C, A)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return (ans*B)%10000003;
}


int main(int argc, char const *argv[]){
/*code*/

    vector<int> v={1, 8, 11, 3};
    int A=10, B=1;
    cout<<paint(A, B, v);
    return 0;
}