class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        int n = strs.size();

        for(int i=0; i<n; i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            mpp[s].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto& it : mpp){
            vector<string> grp;
            grp = it.second;
            ans.push_back(grp);
        }

        return ans;
    }
};
