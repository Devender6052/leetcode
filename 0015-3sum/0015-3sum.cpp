class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if((i>0) && (nums[i]==nums[i-1])){
                continue;
            }
            int x=-nums[i];
            int s=i+1;
            int e=nums.size()-1;
            while(s<e){
                if(nums[s]+nums[e]==x){
                    ans.push_back({-x,nums[s],nums[e]});
                    s++,e--;
                    while((s<e) && (nums[s]==nums[s-1])) s++;
                }
                else if(nums[s]+nums[e]<x){
                    s++;
                }
                else e--;
            }
        }
        return ans;
    }
};