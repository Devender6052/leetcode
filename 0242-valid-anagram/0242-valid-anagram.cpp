class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> mp;
        int n=s.size();
        int m=t.size();
        if(m!=n){
            return 0;
        }
        for(auto x:s){
            mp[x]++;
        }
        for(auto n:t){
            if((mp.find(n)==mp.end()) ||(mp[n]==0) ){
                return 0;
            }
            mp[n]--;
        }
        return 1;
    }
};