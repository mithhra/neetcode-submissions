class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mans;
        
        for(int i=0; i<nums.size();i++){
            mans.insert({nums[i], i});
            int j = target - nums[i];
            if(mans.count(j) && mans[j] != i){
                return{mans[j],i};
            }
            



        }
    
        
       
           return {};
        
    }
};
