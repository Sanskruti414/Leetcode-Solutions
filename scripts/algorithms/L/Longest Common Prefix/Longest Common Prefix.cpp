class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //brute
        string ans="";
        string ref=strs[0];
        for(int i=0;i<ref.size();i++)
        {
            int j=1;
            for(;j<strs.size();j++)
            {
                if(ref[i]!=strs[j][i])
                    break;
            }
            if(j==strs.size())
                ans+=ref[i];
            else
                break;
        }
        return ans;
    }
};
