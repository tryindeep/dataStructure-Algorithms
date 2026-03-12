//    Recursion ?
// --> When a function calls itself. Until a specified
//     condition met.

// Please check notes on this topic (R)

#include <iostream>
using namespace std;


int cnt = 0;
void print(){
    if(cnt == 3) return; // base condition
    cout  << cnt << endl;
    cnt ++;
    print();
}

int main (){
    print();
}
 /*
 
 Output :
0       
1
2

 */


