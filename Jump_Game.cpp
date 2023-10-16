class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mini = 0;
        for(int i=nums.size()-2;i>=0;i--){
            mini++;
            if(nums[i]>=mini){
                mini = 0;
            }
        }
        if(mini == 0){
            return true;
        }
        return false;
    }
};