class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mans;
        
        for(int i=0; i<nums.size();i++){
            
            int j = target - nums[i];
            if(mans.count(j)){
                return{mans[j],i};
            }
            mans.insert({nums[i], i});
            



        }
    
        
       
           return {};
        
    }
};
