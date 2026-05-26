class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int>mp;
        vector<int>ans;

        for(auto i : nums){
            mp[i]++;
        }
        
        vector<pair<int,int>>freq;

        for(auto i : mp){
         freq.push_back({i.second, i.first});
        }

        sort(freq.rbegin(),freq.rend());

        for(int i=0; i<k; i++){
            ans.push_back(freq[i].second);
        }

    return ans;
    }
};
