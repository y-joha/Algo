
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

class Solution 
{

struct agas
{
    int index;
    int value;
};

struct Comparator 
    {
        bool operator()(const agas& p1,const agas& p2) {
            return p1.value < p2.value;
        }
    };



public:
    vector<int> twoSum(vector<int>& nums, int target) 
{
    vector<struct agas> not_pairs_at_all;
    not_pairs_at_all.resize(nums.size());
    
    int i = 0, j = nums.size() - 1;

    for (size_t i = 0; i < nums.size(); ++i)
    {
        not_pairs_at_all[i].index = i;
        not_pairs_at_all[i].value = nums[i]; 
    }
    
    sort(not_pairs_at_all.begin(),not_pairs_at_all.end(),Comparator());

    vector<int> sol = {0,0};
    i = 0, j = nums.size() - 1;
    while(j >= 0 && i < nums.size())
    {   
        if(target == not_pairs_at_all[i].value + not_pairs_at_all[j].value)
        {
            sol[0] = not_pairs_at_all[j].index;
            sol[1] = not_pairs_at_all[i].index;
            return sol;
        }
        
        if(target < not_pairs_at_all[i].value + not_pairs_at_all[j].value)
        {
            --j;
            continue;
        }
        
        if(target > not_pairs_at_all[i].value + not_pairs_at_all[j].value)
        {
            ++i;
            continue;
        }
    }
    return sol;
}



};