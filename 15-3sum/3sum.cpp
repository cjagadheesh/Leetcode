class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++) {

            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            unordered_set<int> seen;

            for (int j = i + 1; j < nums.size(); j++) {

                int target = -(nums[i] + nums[j]);

                if (seen.count(target)) {
                    ans.push_back({nums[i], target, nums[j]});

                    // Skip duplicate second elements
                    while (j + 1 < nums.size() && nums[j] == nums[j + 1])
                        j++;
                }

                seen.insert(nums[j]);
            }
        }

        return ans;
        
    }
};