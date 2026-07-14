#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id;
    int deadline;
    int profit;
};

class Solution {
public:
    static bool comparator(const Job& a ,const Job& b){
        return a.profit > b.profit;
    }
    vector<int> JobScheduling(vector<Job>& jobs) {
        int n = jobs.size();

        sort(jobs.begin(), jobs.end(),comparator);

        int maxDeadline = 0;
        for (auto &job : jobs) {
            maxDeadline = max(maxDeadline, job.deadline);
        }

        vector<int> slot(maxDeadline + 1, -1);

        int countJobs = 0;
        int totalProfit = 0;

        for (int i = 0; i < n; i++) {
            for (int day = jobs[i].deadline; day > 0; day--) {
                if (slot[day] == -1) {
                    slot[day] = jobs[i].id;
                    countJobs++;
                    totalProfit += jobs[i].profit;
                    break;
                }
            }
        }

        return {countJobs, totalProfit};
    }
};

int main() {
    vector<Job> jobs = {
        {1, 4, 20},
        {2, 1, 10},
        {3, 2, 40},
        {4, 2, 30}
    };

    Solution ob;
    vector<int> ans = ob.JobScheduling(jobs);

    cout << ans[0] << " " << ans[1] << endl;
}




// 
// class Solution{  
// public:  
//     static bool comparator(const vector<int>& a, const vector<int>& b) {
//         return a[2] > b[2];   // sort by profit descending
//     }

//     vector<int> JobScheduling(vector<vector<int>>& Jobs) { 
//         int n = Jobs.size();

//         sort(Jobs.begin(), Jobs.end(), comparator);

//         int maxDeadline = 0;
//         for (auto& job : Jobs) {
//             maxDeadline = max(maxDeadline, job[1]);
//         }

//         vector<int> slot(maxDeadline + 1, -1);

//         int countJobs = 0;
//         int totalProfit = 0;

//         for (int i = 0; i < n; i++) {
//             int id = Jobs[i][0];
//             int deadline = Jobs[i][1];
//             int profit = Jobs[i][2];

//             for (int day = deadline; day > 0; day--) {
//                 if (slot[day] == -1) {
//                     slot[day] = id;
//                     countJobs++;
//                     totalProfit += profit;
//                     break;
//                 }
//             }
//         }

//         return {countJobs, totalProfit};
//     } 
// };


