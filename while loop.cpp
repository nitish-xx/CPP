#include<bits/stdc++.h>
using namespace std;

int main() {
    int i=0;
    while(i<0){
        cout<<"while loop i: "<<i<<"\n";
    }

    //do while loop => run atleast once
    i=0;
    do{
        cout<<"do while loop i:"<<i<<"\n";
    }
    while(i<0);


    int n;
    do{
        cin>>n;
        if(n%2==0){
            cout<<n<<" is even\n";
        }
        else {
            cout<<n<<" is odd\n";
        }
    }
    while(n!=0);
}
