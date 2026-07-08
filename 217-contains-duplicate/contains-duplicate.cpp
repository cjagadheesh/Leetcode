class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, bool> mpp;
        for(int num: nums){
            if(mpp.contains(num)){
                return true;
            }
            mpp[num] = true;
        }
        return false;
    }
};