class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<int>freq(256,0);
        if(n != m) return false;
        for(int i =0;i<n;i++){
            freq[s[i]]++;
            freq[t[i]]--;

        }
        for(int i=0;i<256;i++){
            if(freq[i]!= 0){
                return false;
            }
        }
      return true;
    }
};
