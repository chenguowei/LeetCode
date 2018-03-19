//
// Created by 陈国威 on 2018/3/13.
//
//Given nums = [2, 7, 11, 15], target = 9,

//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
using std::vector;
#include <unordered_map>
using std::unordered_map;

class Solution
{
 public:
  vector<int> twoSum(vector<int>& nums, int target)
  {
	std::unordered_map<int, int> record;

	for (int i = 0; i != nums.size (); ++i)
	  {
		auto found = record.find (nums[i]);
		if ( found != record.end ())
		  return {found->second, i};

		record.emplace (target - nums[i], i);

	  }
  }
};
#endif //LEETCODE_SOLUTION_H
