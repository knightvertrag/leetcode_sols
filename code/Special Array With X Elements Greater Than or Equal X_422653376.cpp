static const auto fast = []() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    return 0;
}();

class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(unsigned int i = 0; i <= nums.size(); i++){
            unsigned int count = 0;
            for(unsigned int j = 0; j < nums.size(); j++){
                if(nums[j] >= i)
                    ++count;
            }
            if(count == i)
                return i;
            count = 0;
        }
        return -1;
    }
};
