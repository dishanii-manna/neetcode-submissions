
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;
        int leftsum = 0;
        int rightsum = 0;

        for(int i = 0; i < n; i++) {
            totalsum = totalsum + nums[i];
        }

        for(int k = 0; k < n; k++) {
            rightsum = totalsum - leftsum - nums[k];

            if(leftsum == rightsum) {
                return k;
            }

            leftsum = leftsum + nums[k];
        }

        return -1;
    }
};
