


class Solution {
public:
    int numberOfSteps(int num) 
    {
        if(0 == num)
        {
            return 0;
        }
        if(0 == num%2)
        {
            return 1 + numberOfSteps(num/2);
        }
        else
        {
            return 1 + numberOfSteps(num-1);
        }
    }
};