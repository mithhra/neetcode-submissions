class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> sum;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int target = -nums[i];
            int a = i+1;
            int b = nums.size()-1;
            while(a<b){
                int currsum = nums[a]+nums[b];
            if(currsum>target) b--;
            else if(currsum<target) a++;
            else{
                sum.push_back({nums[i],nums[a],nums[b]});
                a++;
                b--;
                while(a<b && nums[a]==nums[a-1]) a++;

            }
            
            }
        }
        return sum;
        
    }
};
