class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==1) return 1;

        int l=0, r=0;
        while(r<nums.size()){
            nums[l] = nums[r];
            while(r<nums.size() && nums[r] == nums[l]){
                r++;
            }
            l++; 
        }
        return l;
    }
};