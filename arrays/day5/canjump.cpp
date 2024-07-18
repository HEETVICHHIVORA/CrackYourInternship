class Solution {
public:
    bool canJumpFromPosition(int position, vector<int>& nums, vector<int>& memo) {
        if (memo[position] != -1) {
            return memo[position] == 1;
        }
        
        int furthestJump = min(position + nums[position], (int)nums.size() - 1);
        for (int nextPosition = position + 1; nextPosition <= furthestJump; nextPosition++) {
            if (canJumpFromPosition(nextPosition, nums, memo)) {
                memo[position] = 1;
                return true;
            }
        }
        
        memo[position] = 0;
        return false;
    }

    bool canJump(vector<int>& nums) {
        vector<int> memo(nums.size(), -1);
        memo[nums.size() - 1] = 1; 
        return canJumpFromPosition(0, nums, memo);
    }
};



// better soln 

class Solution {
    public boolean canJump(int[] nums) {
        int goal = nums.length-1;
        
        for(int i=nums.length-2;i>=0;i--){
            
            if(i + nums[i]>= goal ){
               goal = i;
            }
        }
            return goal == 0;
        
    }
}