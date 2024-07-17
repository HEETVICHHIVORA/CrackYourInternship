class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        int n = nums.size();
        mp[0] = 1;
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            int find = sum - k;
            if (mp.find(find) != mp.end()) {
                count += mp[find];
            }
            mp[sum] += 1;
        }
        return count;
    }
};
