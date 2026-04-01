#include<bits/stdc++.h>
using namespace std;


// using MAP // better 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) { 
        int n = nums.size(); 
        int mini = (n/3)+1;
        vector<int> mj_elements;
        unordered_map<int , int > mp;
        for(auto& num : nums){
            mp[num]++;
        }
        for(auto &it : mp){
            if(it.second >= mini){
                mj_elements.push_back(it.first);
                if(mj_elements.size() == 2) break;
            }
        }
        sort(mj_elements.begin(), mj_elements.end());
        return mj_elements;
    }
};

// o\optimal 
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) { 
        int n = nums.size();
        int count1= 0 , count2 = 0, element1=INT_MIN , element2=INT_MIN;

        for(int i = 0 ; i < n; i++){
            if(count1 == 0 && nums[i] != element2){
                count1 = 1;
                element1 = nums[i];
            }
            else if(count2 == 0 && nums[i] != element1){
                count2 = 1;
                element2 = nums[i];
            }
            else if(element1 == nums[i]){
                count1++;
            }
            else if(element2 == nums[i]){
                count2++;
            }
            else{
                count1--; count2--;
            }
        }

        vector<int>ls;
        count1 = 0,count2=0;
        for(int i = 0 ; i < n ; i++){
            if(element1 == nums[i]) count1++;
            if(element2 == nums[i]) count2++;
        }

        int mini = (n/3)+1;
        if(count1 >= mini) ls.push_back(element1);
        if(count2 >= mini) ls.push_back(element2);

        sort(ls.begin(), ls.end());
        return ls;
    }
};