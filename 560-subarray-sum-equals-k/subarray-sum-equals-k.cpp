class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0]=1;
        int sum =0;
        int sums =0;
        for(int i =0; i<nums.size();i++){
            sums += nums[i];
            int s = sums -k;
            if (mpp.find(sums - k) != mpp.end()) {
                sum += mpp[sums - k];
            }
            
            
            mpp[sums]++;
        }
        
        return sum;
    }
};