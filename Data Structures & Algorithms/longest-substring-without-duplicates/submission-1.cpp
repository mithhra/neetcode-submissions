// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int l=0;
//         int r=0;
//         unordered_map<char, int> mp;
//         for(int i=0;i< s.size();i++){
//             if(mp.find(s[i]) != mp.end()){
//                 l= max(mp[s[i]]+1,l);
//             }
//             mp[s[i]] = i;
//             r = max(r, i-l+1);
//         }
//         return r;
        
//     }
// };
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l = 0, res = 0;

        for (int r = 0; r < s.size(); r++) {
            if (mp.find(s[r]) != mp.end()) {
                l = max(mp[s[r]] + 1, l);
            }
            mp[s[r]] = r;
            res = max(res, r - l + 1);
        }
        return res;
    }
};