class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> sum;
        for(int i=0; i<nums.size(); i++){
          
            for(int j=i+1; j<nums.size(); j++){
                for(int k=j+1; k <nums.size(); k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                     vector<int>ans;
                     ans.push_back(nums[i]);
                     ans.push_back(nums[j]);
                     ans.push_back(nums[k]);
                     
                     sort(ans.begin(), ans.end());

                     if(find(sum.begin(),sum.end(),ans) == sum.end()){
                     sum.push_back(ans);
                     }
                     
                    }
                }
            }
            
        }
        return sum;
    }
};
