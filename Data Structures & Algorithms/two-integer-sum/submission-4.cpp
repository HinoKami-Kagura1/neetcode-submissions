class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> HashMap;

            for (int i = 0; i < nums.size(); i++) {
                
                int diff = target - nums[i];

                if (HashMap.find(diff) != HashMap.end()) {

                    return {HashMap[diff], i};
                }

                HashMap[nums[i]] = i;
            }

        return {};
    }
};