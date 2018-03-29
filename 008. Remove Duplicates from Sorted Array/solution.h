//
// Created by 陈国威 on 2018/3/28.
//

/*
 * 题目：
 * Given a sorted array, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Example:

Given nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively.
It doesn't matter what you leave beyond the new length.

 中文翻译：
 给定一个有序数组，你需要原地删除其中的重复内容，使每个元素只出现一次,并返回新的长度。

不要另外定义一个数组，您必须通过用 O(1) 额外内存原地修改输入的数组来做到这一点。

示例：

给定数组: nums = [1,1,2],

你的函数应该返回新长度 2, 并且原数组nums的前两个元素必须是1和2
不需要理会新的数组长度后面的元素
 * */

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution
{
 public:
  int removeDuplicates(vector<int>& nums)
  {
	if (nums.size () <= 1)
	  return nums.size ();

	int count = 0;
	for (int i = 1; i < nums.size (); ++i)
	  {
		if (nums[i] == nums[i-1])
		 ++count;
		else
		  {
			nums[i - count] = nums[i];
		  }
	  }

	nums.erase (nums.end ()-count, nums.end ());
	return nums.size ();
  }
};

#endif //LEETCODE_SOLUTION_H
