class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(), 1);
        int pre = 1;
        int post = 1;
        for(int n = 0; n < nums.size(); n++){
            answer[n] = pre;
            pre *= nums[n];
            
        }
        for(int i = nums.size()-1;i>=0;i--){
            answer[i] *= post;
            post *= nums[i];
            
        }
        return answer;
    }
};