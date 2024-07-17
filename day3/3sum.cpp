#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        int n = nums.size() - 1;
        sort(nums.begin(), nums.end());  // Sort the array first

        for (int i = 0; i < n; i++) {
            int l = i + 1;
            int r = n;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    vector<int> a = {nums[i], nums[l], nums[r]};
                    s.insert(a);
                    l++;r--;
                } else if (sum > 0) {
                    r--;
                } else {
                    l++;
                }
            }
        }

        vector<vector<int>> vc(s.begin(), s.end());
        return vc;
    }
};