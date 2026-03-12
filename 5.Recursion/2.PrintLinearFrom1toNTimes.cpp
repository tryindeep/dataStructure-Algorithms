#include <iostream>
using namespace std;

void print(int n, int i){
    if(i > n) return; // base condition
    cout  << i << endl;
    print(n,i+1);
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