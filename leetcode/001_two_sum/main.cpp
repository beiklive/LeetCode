#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

void case1(Solution& test)
{
    vector<int> nums = {2,7,11,15};
    auto target = 9;
    auto ret = test.twoSum(nums, target);
    std::cout << "[" << ret[0] << ", " << ret[1] << "]" << std::endl;
}

void case2(Solution& test)
{
    vector<int> nums = {3,2,4};
    auto target = 6;
    auto ret = test.twoSum(nums, target);
    std::cout << "[" << ret[0] << ", " << ret[1] << "]" << std::endl;
}

void case3(Solution& test)
{
    vector<int> nums = {3,3};
    auto target = 6;
    auto ret = test.twoSum(nums, target);
    std::cout << "[" << ret[0] << ", " << ret[1] << "]" << std::endl;
}

int main()
{
    Solution test;

    case1(test);
    case2(test);
    case3(test);

    return 0;
}