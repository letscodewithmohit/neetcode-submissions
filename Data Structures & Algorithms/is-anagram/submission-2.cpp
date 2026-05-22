class Solution {
public:
    bool isAnagram(string s, string t) {
    // 1ST APPROCH USING SORTING

    //    sort(s.begin(),s.end());
    //    sort(t.begin(),t.end());

    //    if(s == t)return true;

    //    return false;

    // 2ND USING HASH MAP

    if(s.size() != t.size())return false;

    map<char,int>freq_s;
    map<char,int>freq_t;

    for(int i=0; i <s.size(); i++){
        freq_s[s[i]]++;
        freq_t[t[i]]++;
    }
    return freq_s == freq_t;

    // 3rd approch using hash map

    if(s.size() != t.size()) return false;
    vector<int> count_hash(26,0);

    for(int i=0; i<s.size(); i++){
     count_hash[s[i]]++;
     count_hash[t[i]]--;
    }
   
    for(int i=0; i<count_hash.size(); i++){
        if(count_hash[i] != 0){
            return false;
        }
    }

    return true;
    }
};
