#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPlatforms(vector<int> &arr, vector<int> &dep)
    {
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        int n = arr.size();
        int i = 0;
        int j = 0;
        int cnt = 0;
        int maxcnt = 0;
        while (i < n && j < n)
        {
            if (arr[i] <= dep[j])
            {
                cnt++;
                i++;
            }
            else
            {
                cnt--;
                j++;
            }
            maxcnt = max(maxcnt, cnt);
        }
        return maxcnt;
    }
};

int main()
{
    vector<int> arr = {900, 945, 955, 1100, 1500, 1800};
    vector<int> dep = {920, 1200, 1130, 1150, 1900, 2000};

    Solution obj;
    cout << "Minimum number of Platforms required "
         << obj.countPlatforms(arr, dep) << endl;

    return 0;
}



//
// class Solution{
//     public:
//     int findPlatform(vector<int>& Arrival, vector<int>& Departure){
//         //your code goes here
//         sort(Arrival.begin(), Arrival.end());
//         sort(Departure.begin(), Departure.end());
//         int n = Arrival.size();
//         int i=0;
//         int j=0;
//         int count=0;
//         int maxCount=0;

//         while(i < n && j < n ){
//             if(Arrival[i] <= Departure[j]){
//                 i++;
//                 count++;
//             }else{
//                 j++;
//                 count--;
//             }

//             maxCount = max(count,maxCount);
//         } 
//         return maxCount;
//     }
// };