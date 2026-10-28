class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r = nums.size()-1;
        while(l<=r ){
            int middle = (l+r)/2;
            if(nums[middle] == target) return middle;
            
           if(nums[l]<=nums[middle]){
            if(target>nums[middle] || target<nums[l]){
                 l=middle+1;
            }
            else {
                r=middle-1;
            }
           }else{
            if(target<nums[middle] || target > nums[r]) {
                r = middle-1;
            }
            else l = middle+1;
           
           }
           
        }
        return -1;
    }
};
