//week ->5 Assignment
// Assignment Question number-> 07

//Method->1 using hash map

class Solution {
public:
    std::array<int,256> hash(string s)
    {
        std::array<int,256> hash={0};
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]]+=1;
        }
        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<std::array<int,256>,vector<string>> mp;

        for(int i=0;i<strs.size();i++)
        {
            mp[hash(strs[i])].push_back(strs[i]);
        }

        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};


//Method->2  Using sorting

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }

        for(auto it=mp.begin();it!=mp.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};
