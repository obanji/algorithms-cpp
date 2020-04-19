#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> myMap;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++)
        {
            myMap[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int result = target - nums[i];
            if (myMap.find(result) != myMap.end() && myMap[result] != i)
            {
                res.push_back(i);
                res.push_back(myMap[result]);

                return res;
            }
            
        }
        
        return res;
    }
};