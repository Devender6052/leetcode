class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        if(nums.size()==0){
            return 0;
        }
        int lc=1;
        for(auto x: nums){
            s.insert(x);
        }
        for(auto it : s){
            if(s.find(it-1)==s.end()){
                int x=it;
                int count=1;
                while(s.find(x+1)!=s.end()){
                    x++;
                    count++;
                }
                lc=max(lc,count);
            }
        }
        return lc;

    }
};