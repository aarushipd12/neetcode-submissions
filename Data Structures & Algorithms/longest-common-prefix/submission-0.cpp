class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        for (int i=0; i<strs[0].size(); i++){
            char ch = strs[0][i];
            bool match = true;
            for(int j=0; j<strs.size(); j++){

                if(strs[j].size() < i || strs[j][i] != ch){
                    match = false;
                    break;
                }
            }

            if (!match) break;
            else ans.push_back(ch);
        }
        return ans;
    }
};