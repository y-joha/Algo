#include <unordered_map>
#include <string>
using namespace std;

class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length()) {return false;};
        unordered_map<char,int> mp;
        for(auto i : s) 
        {
            mp.emplace(i,1);
        }
        for (auto f : t)
        {
            bool flag = (mp.emplace(f,2)).second;
            if(flag) return false;
        }
        return true;
    }

    bool isAnagramSubmitted(string s, string t) 
    {
        bool flag = false;
        if(s.length() != t.length()) {return false;};
        unordered_map<char,int> mp;
        for(auto i : s) 
        {
            mp[i]++;
        }
        for (auto f : t)
        {
            if(!mp[f])
            {
                return false;
            }
            mp[f]--;
            
            flag = !(mp[f]);
        }
        return flag;
    }
};