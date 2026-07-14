#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();

        vector<vector<int>> meetings;
        for(int i=0; i<n; i++){
            // meeting  end , start , position 
            meetings.push_back({end[i] , start[i], i+1});
        }

        // very important
        sort(meetings.begin(), meetings.end());

        vector<int> ans;
        int lastend = -1;

        for(auto& m : meetings){
            int e = m[0];
            int s = m[1];
            int position = m[2];

            if(s > lastend){
                ans.push_back(position);
                lastend = e;
            }
        }

        return ans;


    }

};

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end   = {2, 4, 6, 7, 9, 9};

    Solution sol;
    vector<int> res = sol.maxMeetings(start, end);

    for (int idx : res) cout << idx << " ";
}