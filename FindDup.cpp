#include <vector>
#include <unordered_map>
#include <map>



using namespace std;

// Contains Duplicate
class Solution {
public:
    bool containsDuplicateHash(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        for(auto i : nums) 
        {
        bool flag = (mp.emplace(i,1)).second;
        if(!flag) return true;
        }
        return false;
    }

    bool containsDuplicateHash(vector<int>& nums) 
    {
        map<int,int> mp;
        for(auto i : nums) mp[i]++;
        bool flag = false;
        for(auto i : mp)
        {
            if(i.second >= 2) return true;
        }
        return flag;
    }
};