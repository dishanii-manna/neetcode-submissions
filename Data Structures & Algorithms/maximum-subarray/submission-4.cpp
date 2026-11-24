class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int longest = nums[0];
        int sum = 0;
        for(int i =0; i<n; i++){
            sum = sum + nums[i];
        
        longest = max(longest, sum);
         if(sum < 0) {
                sum = 0;
            }
        }
     return longest;
    }
};
        
