class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(const auto& s : strs){
            vector<int> ch(26,0);
            for(const auto& c : s){
                ch[c-'a']++;
            }
            string key = to_string(ch[0]);
            for(int i=1;i<26;i++){
                key+= ',' + to_string(ch[i]);
            }
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for(const auto& r : res){
            result.push_back(r.second);
        }
        return result;
    }
};
