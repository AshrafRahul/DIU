<?php
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>v;
        vector<int>v2;
        for(int i=0;i<nums.size();i++){
            int j=i+1,k=nums.size()-1;
            long long int s;
            while(j<k){
                 s=nums[i]+nums[j]+nums[k];
                 if(s==0)
                 {
                 v.insert({nums[i],nums[j],nums[k]});
                 j++,k--;
            }else if(s<0){
                j++;
            }else{
                k--;
            }
            }
        }
        vector<vector<int>>f;
        for(auto i:v){
            f.push_back(i);
        }
      return f;
    }
};
?>