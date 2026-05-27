class Solution {
public:
    bool isPalindrome(string s) {
    string str;
    for(int i=0; i < s.size(); i++){
        if(isalnum(s[i])){
    
        str.push_back(tolower(s[i]));
        }
    }

        // string rev = str;
        // reverse(rev.begin(),rev.end());

        // if(str == rev){
        //     return true;
        // }

        int st = 0, ed = str.size()-1;

        while(st < ed){
            if(str[st] != str[ed]){
                return false;
            }
            st++;
            ed--;
        }

        return true;
    }
};
