// Create Time : 2017/07/30
// Visual Studio 2015

/* Description :
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

// Approach 1
// T(n) = O(n*n) ; S(n) = O(1)
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> returnIndice(2);
		for (size_t i = 0; i < nums.size(); i++)
		{
			for (size_t j = i + 1; j < nums.size(); j++)
			{
				if (target - nums[i] == nums[j])
				{
					returnIndice[0] = i;
					returnIndice[1] = j;
				}
				/*else
				{
				returnIndice[0] = -1;
				returnIndice[1] = -1;
				}*/
			}
		}
		return returnIndice;
	}
};

