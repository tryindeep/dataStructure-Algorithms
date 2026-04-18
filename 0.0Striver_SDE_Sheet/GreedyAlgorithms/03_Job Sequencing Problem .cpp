#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id;
    int dead;
    int profit;
};

class Solution {
public:
    // Comparator
    static bool comparison(Job a, Job b) {
        return a.profit > b.profit;
    }

    pair<int, int> JobScheduling(vector<Job>& jobs) {
        int n = jobs.size();

        // Step 1: Sort by profit (descending)
        sort(jobs.begin(), jobs.end(), comparison);

        // Step 2: Find max deadline
        int maxi = 0;
        for (auto &job : jobs) {
            maxi = max(maxi, job.dead);
        }

        // Step 3: Create slot vector
        vector<int> slot(maxi + 1, -1);

        int countJobs = 0;
        int jobProfit = 0;

        // Step 4: Assign jobs
        for (int i = 0; i < n; i++) {
            for (int j = jobs[i].dead; j > 0; j--) {
                if (slot[j] == -1) {
                    slot[j] = i;
                    countJobs++;
                    jobProfit += jobs[i].profit;
                    break;
                }
            }
        }

        return {countJobs, jobProfit};
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
    auto ans = ob.JobScheduling(jobs);

    cout << ans.first << " " << ans.second << endl;
}