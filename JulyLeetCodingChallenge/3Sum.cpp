//https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/545/week-2-july-8th-july-14th/3384/
/*
Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        if(nums.size()<3)
            return v;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int val = nums[i];
            int j = i+1;
            int k = nums.size()-1;
            while(j<k)
            {
                
                
                int sum = val+nums[j]+nums[k];
                if(sum==0)
                {
                    st.insert({val,nums[j++],nums[k--]}); 
                }
                else if(sum>0)
                    k--;
                else if(sum<0)
                    j++;
            }
        }
        for(auto x: st){
            v.push_back(x);
        }
        return v;
        
    }
};
