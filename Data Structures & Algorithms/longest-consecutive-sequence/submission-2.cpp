class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       
    // int count = 1;
    // int largest = 1;

    //     if(nums.size() == 0){
    //         return 0;
    //     }
    //     sort(nums.begin(), nums.end());

    //     for(int i=1; i < nums.size(); i++){

    //         // agar element same hai toh
    //         if(nums[i] == nums[i-1]){
    //             continue;
    //         }
    //         else if(nums[i] == nums[i-1] + 1){
    //         count++;
    //         }
    //         else{
    //             largest = max(largest,count);
    //             count = 1;
    //         }
    //     }

    //     largest = max(largest,count);
    //     return largest;


unordered_set<int>st;

for(int i=0; i<nums.size(); i++){
    st.insert(nums[i]);
}

int largest = 0;

for(auto num : st){
  
  if(st.find(num-1) == st.end()){
    // agar st mai current element se small kuch nhi hai toh

    int currentnum = num;
    int count = 1;

    while(st.find(currentnum + 1) != st.end()){
        currentnum++;
        count++;
    }

    largest = max(count,largest);
  }
}
return largest;

    }
};
