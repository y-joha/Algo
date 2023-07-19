#include <algorithm>
#include <string>
#include <set>

using namespace std;

/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
A subsequence of a string is a new string that is formed from
the original string by deleting some (can be none) of 
the characters without disturbing the relative positions of 
the remaining characters. (i.e., "ace" is a 
subsequence of "abcde" while "aec" is not).
*/
typedef struct varify
    {
        int index;
        char char_to_check;
    }varification_t;


bool isSubsequence(string s, string t) 
    {
    
    int i = 0;
    int j = 0;

    while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j])
        {
            ++i;
            ++j;
            continue;
        }
        ++j;

    }

    return i == s.length();
    
}



bool isSubsequence(string s, string t) 
{
    
    char target =s[0];
    char tester =t[0];
    
    while (tester)
    {
        if(target == tester)
        {
            target++;
        }
        tester++;
        if(!target)
        {
            true;
        }
    }
    return false;



    int i = 0;
    int j = 0;
    varification_t var[s.length()];

    int length_of_string = s.length();
    while(i < length_of_string)
    {
        var->char_to_check = (s[i]);
        var->index = i;
        i++;
    }

    i = 0;
    while ((var[i]).index < s.length())
    {
        if ((var[i]).char_to_check == (t[j]))
        {
            if ((var[i]).index == s.length())
            {
                return true;
            }
            ++i;
        }
        ++j;
    }

    return false;
}