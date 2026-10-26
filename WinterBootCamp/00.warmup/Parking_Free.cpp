
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int h1, m1 ,h2, m2;
    cin >> h1 >> m1;
    cin >>  h2 >> m2;

    int startTime = h1 * 60 + m1;
    int endTime = h2 * 60 + m2;

    int duration = (endTime - startTime);

    int hours = (duration / 60);
    int extrahr = (duration % 60 )? 1: 0;

    int totalHrs = hours + extrahr;
    

    int paidhrs = max(0, totalHrs-2);
    int fee = min(paidhrs * 20 , 100);

    cout << fee << '\n';

    return 0;
}
