class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> uniquenum;
        int n = nums.size();
        int count = 0;
        for(int i = 0; i< n; i++){
            if(nums[i] == val){
                count++;
            }
            else 
            uniquenum.push_back(nums[i]);
        }int k = uniquenum.size();
         for(int i = 0; i < k; i++){
            nums[i] = uniquenum[i];
        }

        return k;
    }
   
   
};