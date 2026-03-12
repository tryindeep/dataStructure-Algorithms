#include <iostream>
using namespace std;

void print(int n, int i){
    if(n < i) return; // base condition
    cout  << n << endl;
    print(n-1,i);
}

int main (){ 
    int t;
    cin >> t ;
    for(int i = 0 ; i < t ; i++){
        int n ;
        cin >> n; 
        print(n,1);
    } 
    return 0;
}