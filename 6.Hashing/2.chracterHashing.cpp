
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // pre coompute 
    int hash[256] = {0};
    for(int i = 0; i < s.size() ; i++){
        hash[s[i]]++;
    }


    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout << hash[c] << endl;
    }
    return 0;
    
}

/////--------------------------using MAP----------------

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     // pre coompute 
//     map<char ,int> mpp;
//     for(int i = 0; i < s.size() ; i++){
//         mpp[s[i]]++;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         //fetch
//         cout << mpp[c] << endl;
//     }
//     return 0;
// }
