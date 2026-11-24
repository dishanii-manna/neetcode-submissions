class Solution {
public:
    char findTheDifference(string s, string t) {
        int n =  s.size();
        int p = t.size();
        int  temp = 0;
      for(int i = 0; i<n; i++){
        temp = temp ^= s[i];
      }
            for(int j = 0; j<p; j++){
                temp = (temp ^= t[j]);
        }
        return temp;
    }
};