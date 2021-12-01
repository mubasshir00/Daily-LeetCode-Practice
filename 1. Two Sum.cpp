class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
int temp1=0,temp2=0;
    vector<int>v;
 for(int i=0;i<nums.size();i++){
  for(int j=0;j<nums.size();j++){
   if(nums[i]+nums[j]==target && i!=j){
    temp1 = i;
    temp2 = j;
      break;
   }
  }
 }
v.push_back(temp1);
    v.push_back(temp2);
 return v;
}
};
