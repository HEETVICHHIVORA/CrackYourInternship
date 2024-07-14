class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = nums.size()-1;
        for(int i=0;i<=nums.size();i++) {
           for(int j =0;j<nums.size();j++){
                if(j<nums.size()-1){
                    if(nums[j]==0) swap(nums[j],nums[j+1]);
                }
           }
        }
    }
};