class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int avlsum = 0;
        int temp =0;
        int sum = n*(n+1)/2;
        for(int i =0; i<n;i++){
         avlsum = avlsum + nums[i];   
        }
          temp = (sum - avlsum);
         return temp;
    }
};
