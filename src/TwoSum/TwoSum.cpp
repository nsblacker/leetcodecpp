#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> result;
        int low = 0, high = numbers.size()-1;
        while (low < high)
        {
            if (numbers[low] + numbers[high] == target) {
                result.push_back(low + 1);
                result.push_back(high + 1);
                return result;
            } else {
                numbers[low] + numbers[high] > target ? high-- : low++;
            }
            
        }
        return result;
    }
};

int main(int argc, char *argv[]) {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution su = Solution();
    vector<int> result = su.twoSum(nums, target);
    for (int i :result) 
    {
        cout << result[i] << endl;
    }
    return 0;
}