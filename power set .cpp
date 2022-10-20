#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> set(n);
    for(int i=0;i<n;i++){
        cin>>set[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++ ){
            for(int k=i; k<=j; k++)
               cout<<set[k]<<" ";
               cout<<endl;
        }    }
    return 0;
}
