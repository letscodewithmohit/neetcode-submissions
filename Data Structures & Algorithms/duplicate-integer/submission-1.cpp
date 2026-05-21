class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    // 1st approch with map 
    // unordered_map<int,int>mp;

    // for(auto i : nums){
    //     mp[i]++;
    // }

    // for(auto i : mp){
    //     if(i.second >= 2){
    //         return true;
    //     }
    // }

    // return false;

    // 2nd approch with set 

// unordered_set<int> s;

// for(int i = 0; i < nums.size(); i++) {

//     if(s.find(nums[i]) != s.end()) {
//        return true;
//     }
//     else {
//          s.insert(nums[i]);
//     }
// }

// return false;
unordered_set<int> s;

for(auto num : nums){
    if(s.count(num)){
        return true;
    }
    else{
        s.insert(num);
    }
}
return false;
    }
};