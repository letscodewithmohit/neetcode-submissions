class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        // for(int i=0; i<numbers.size(); i++){
        //     for(int j=i+1; j<numbers.size(); j++){
        //         if(numbers[i] + numbers[j] == target){
        //          ans.push_back(i+1);
        //          ans.push_back(j+1);
          
        //         }
        //     }
        // }
        // return ans;

    //     int st = 0;
    //     int ed = numbers.size()-1;

    //     while(st < ed){
    //         if(numbers[st] + numbers[ed] == target){
    //         ans.push_back(st+1);
    //         ans.push_back(ed+1);
    //         return ans;
    //         }else if(numbers[st] + numbers[ed] > target){
    //             ed--;
    //         }
    //         else{
    //             st++;
    //         }
       
    //     }
    // return ans;

    unordered_map<int,int>mp;
    
    for(int i=0; i<numbers.size(); i++){
        int sum =  target - numbers[i];

        if(mp.find(sum) != mp.end()){
            ans.push_back(mp[sum] + 1);
            ans.push_back(i + 1);
          
            return ans;
        }
       
           mp[numbers[i]] = i;
        
    }
    return ans;

    }
};
