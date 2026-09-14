class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> ps(nums.size(),0);
        unordered_map<int,int> mp;
        int count=0;
        ps[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            ps[i]=ps[i-1]+nums[i];
        }
        for(int i=0;i<ps.size();i++){
            if(ps[i]==k) count++;
            int val=ps[i]-k;
            if(mp.find(val)!=mp.end()){
                count+=mp[val];
            }
            if(mp.find(ps[i])==mp.end()){
                mp[ps[i]]=0;
            }
            mp[ps[i]]++;
        }
        return count;
    }
};