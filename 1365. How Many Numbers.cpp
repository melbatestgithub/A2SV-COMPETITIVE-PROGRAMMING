class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count,j;
        for(int i=0;i<nums.size();i++){
           for(int j=0;j<nums.size()-1;j++){
               if(j!=1&&nums[j]<nums[i]){
                   count+=nums[j];
               }
           } 
        }
        for(int i=0;i<nums.size();i++){
           return nums[j];
        }
    }
};
