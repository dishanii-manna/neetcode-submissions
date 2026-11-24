class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int p = n - 1;

        while(l <= p) {

            int mid = l + (p - l) / 2;

            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] < target) {
                l = mid + 1;
            }
            else {
                p = mid - 1;
            }
        }

        return l;
    }
};