
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i ;
    cin >> i;
    while(i--){
        string s ;
        cin >> s;
        string rev = s;
        reverse(rev.begin() , rev.end());

        if(s.size() % 2 == 1 && s == rev){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}
