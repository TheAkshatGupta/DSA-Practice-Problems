#include<bits/stdc++.h>
using namespace std;
void pattern12(int n) {
    int space = 2*(n-1);
    //outer loop
    for(int i=1 ;i<=n ;i++) {
        // for numbers inner loop 
        for (int j=1;j<=i;j++) {
            cout << j ;
        }
        // for spaces 
        for(int j=1 ;j<=space ; j++) {
            cout<< " ";
        }
        // for numbers in reverse order
        for (int j=i ; j>=1;j--) {
            cout << j ;
        }
        cout << endl;
        space = space - 2;
    }
}
int main() {
    int n ;
    cin >> n ;
    pattern12(n);
}