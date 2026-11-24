class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<long long, int>mp;
        int longest = 0;
      int  left = 0;
        int n = s.size();
        for(int i = 0; i<n; i++){
            if(mp.find(s[i]) != mp.end()){
                left = max(mp[s[i]]+1, left);
            }
            mp[s[i]] = i;
            longest = max(longest, i-left+1);
        }

        return longest;
    }
};
