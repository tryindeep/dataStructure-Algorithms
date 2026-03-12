// parameterized 

#include <iostream>
using namespace std;

void sum(int i ,int s ){
    if(i < 1 ) {
        cout << s << endl;
        return;
    }
    sum( i-1, s + i);
}

int main (){ 
    int t;
    cin >> t ;
    for(int i = 0 ; i < t ; i++){
        int n ;
        cin >> n;
       sum(n,0);
    } 
    return 0;
}

// Funtional 

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int res = sum(n);
        cout << res << endl ;
    }
    return 0;
}