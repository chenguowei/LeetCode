//
// Created by 陈国威 on 2018/3/19.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <iostream>

using namespace std;

class Solution
{
 public:
  int reverse(int x)
  {
	long long res = 0;
    while (x)
	  {
		res = res * 10 + x%10;
		x /= 10;
	  }

	return (res < INT_MIN || res > INT_MAX) ?0:res;
  }
};

#endif //LEETCODE_SOLUTION_H
