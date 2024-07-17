#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> s;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int l = 0; l < n; l++) { 
            if (l > 0 && nums[l] == nums[l - 1]) continue;

            for (int i = l + 1; i < n; i++) { 
                if (i > l + 1 && nums[i] == nums[i - 1]) continue;

                int left = i + 1;
                int right = n - 1;
                while (left < right) {
                    long long sum = (long long)nums[l] + nums[i] + nums[left] + nums[right];

                    if (sum == target) {
                        vector<int> a = {nums[l], nums[i], nums[left], nums[right]};
                        s.insert(a);
                        left++;
                        right--;
                        
                        while (left < right && nums[left] == nums[left - 1]) left++;
                        while (left < right && nums[right] == nums[right + 1]) right--;
                    } else if (sum > target) {
                        right--;
                    } else {
                        left++;
                    }
                }
            }
        }

        vector<vector<int>> vc(s.begin(), s.end());
        return vc;
    }
};
