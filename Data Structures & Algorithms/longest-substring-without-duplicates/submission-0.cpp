class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        unordered_set<int> ss;
        for(int i=0;i< s.size();i++){
            while(ss.find(s[i]) !=ss.end()){
                ss.erase(s[l]);
                l++;
            }
            ss.insert(s[i]);
            r = max(r, i-l+1);
        }
        return r;
        
        

    }
};