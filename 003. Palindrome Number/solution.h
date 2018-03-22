//
// Created by 陈国威 on 2018/3/20.
//
//	题目：
// Determine whether an integer is a palindrome. Do this without extra space.

/*
 * 方法1： 可以采用 reverse Integer 的方法，先把一个int 翻转，如果翻转后等于原来的则是回文
 * 方法2：翻转int x 的后半部分，利用 32123，回文的前一半等于后一半的翻转
 * */
#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <iostream>
class Solution
{
 public:
  bool isPalindrome(int x)
  {
	if (x < 0 || (x != 0 && x%10==0))
	  return false;

	int rev = 0;
	while (x > rev)
	  {
		rev = rev * 10 + x%10;
		x /= 10;
	  }

	return (x == rev || x == rev /10);
  }
};

#endif //LEETCODE_SOLUTION_H
