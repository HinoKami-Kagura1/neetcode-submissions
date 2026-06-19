class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> slide;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {

            if (!slide.empty() && slide.front() == i - k) {
                
                slide.pop_front();

            }

            

            while (!slide.empty() && nums[slide.back()] < nums[i]) {

                slide.pop_back();
                
                
            }

            

            slide.push_back(i);

            if (i >= k - 1) {

                result.push_back(nums[slide.front()]);
            }   


        }
        

        return result;

    }
};