/*
 C++ STL Divided into 4 parts

 Algoorithms
 Containers
 Functions
 Iteration

*/

// #include <iostream>
// using namespace std;

// // Pair
// void explainPair (){

//     pair <int , int > p1 = {1 , 3};
//     cout << p1.second << " " << p1.first << endl;
//     pair <int , pair< int,int >> p2 = {34 ,{45,12}};
//     cout <<  p2.second.second << " " <<p2.second.first << endl;
//     pair<int, int > arr[] = {{1,3},{5,7},{9,11}};
//     cout << arr[1].second<< endl;
// }

// int main()
// {
//     explainPair();
//     return 0;
// }

//    Recursion ?
// --> When a function calls itself. Until a specified
//     condition met.

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