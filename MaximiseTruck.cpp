#include <vector>
#include <algorithm> 

using namespace std;



int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
{
        sort(boxTypes.begin(), boxTypes.end(), Comparator());
        int unitCount = 0;
        for (auto boxType : boxTypes) {
            int boxCount = min(truckSize, boxType[0]);
            unitCount += boxCount * boxType[1];
            truckSize -= boxCount;
            if (truckSize == 0) break;
        }
        return unitCount;
    }

    struct Comparator 
    {
        bool operator()(vector<int> const& p1, vector<int> const& p2) {
            return p1[1] > p2[1];
        }
    };
