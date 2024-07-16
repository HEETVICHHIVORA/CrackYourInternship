class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        int rem ,ans =0 ;
        map<int,int> mp ;
        mp[sum]++;
        for(int i=0;i<nums.size();i++){
             sum += nums[i];
             rem = sum % k;
             if(rem<0) rem += k;
             if(mp[rem]) ans+=mp[rem]; 
             mp[rem]++;
        }
        return ans ; 
    }
};