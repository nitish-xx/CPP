https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    
    cout << a.length() << ' ' << b.length() << endl;
    
    cout << a + b << endl;
    
    swap( a[0], b[0] );
    cout << a << ' ' <<  b << endl;
    
    return 0;
}



Second solution
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    char A,B;
    cin>>a;
    cin>>b;
    cout << a.length() << " " << b.length() << "\n";
    cout << a << b << "\n";
    A = a[0];
    B = b[0];
    a[0] = B;
    b[0] = A;
    cout << a << " " << b << "\n";
  
    return 0;
}
