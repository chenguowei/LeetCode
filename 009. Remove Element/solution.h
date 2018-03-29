//
// Created by 陈国威 on 2018/3/29.
//

/*
 * 题目：
 * Given an array and a value, remove all instances of that value in-place and return the new length.

	Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

	The order of elements can be changed. It doesn't matter what you leave beyond the new length.

	Example:

	Given nums = [3,2,2,3], val = 3,

	Your function should return length = 2, with the first two elements of nums being 2.

 中文翻译：
 	给定一个数组和一个值，在这个数组中原地移除指定值和返回移除后新的数组长度。

不要为其他数组分配额外空间，你必须使用 O(1) 的额外内存原地修改这个输入数组。

元素的顺序可以改变。超过返回的新的数组长度以外的数据无论是什么都没关系。

示例:

给定 nums = [3,2,2,3]，val = 3，

你的函数应该返回 长度 = 2，数组的前两个元素是 2。


 解法可跟
 	"从排序数组中删除重复元素" 一样，只是修改了判断的条件而已
 *
 * */
#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>

using namespace std;

class Solution
{
 public:
  int removeElement(vector<int>& nums, int val)
  {
	if (nums.size () == 0)
	  return 0;

	int count = 0;
	for (int i = 0; i < nums.size (); ++i)
	  {
		if (nums[i] == val)
		  count++;
		else
		  nums[i-count] = nums[i];
	  }

	return nums.size () - count;
  }
};

#endif //LEETCODE_SOLUTION_H
