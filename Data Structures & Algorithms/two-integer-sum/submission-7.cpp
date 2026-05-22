class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
// 1st approch using looping 
        // for(int i=0; i<len; i++){
        //     for(int j = i+1; j < len; j++){
        //         if(nums[i] + nums[j] == target){
        //             return {i , j};
        //         }
        //     }
        // }

// 2nd approch using map

unordered_map<int,int> mp;

for(int i=0; i<len; i++){
    int result = target - nums[i];

    if(mp.find(result) != mp.end()){
        return {mp[result],i};
    }
        mp[nums[i]] = i;
    
}


}
};
