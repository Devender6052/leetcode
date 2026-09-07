class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2 ,lb=-1,ub=-1;
        while(s<=e){
            if(nums[mid]==target){
                lb=mid;
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{e=mid-1;}
            mid=s+(e-s)/2;
        }
        ans.push_back(lb);
        s=0,e=nums.size()-1;
        mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                ub=mid;
                s=mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{e=mid-1;}
            mid=s+(e-s)/2;
        }
        ans.push_back(ub);
        return ans;
    }
};