class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int m=0;
        for(int i=1;i<nums.size();i++){
            if(count!=0 && nums[i]==nums[i-1]){
                count = count;
            }
            if(nums[i] > nums[i-1] + 1){
                count=0;
            }
            if(nums[i]==nums[i-1]+1){
                 count++;
                 m  = max(m,count);
            }
            
            
        }
        if(nums.size()!=0) m++;
        return m;
        
    }
};
