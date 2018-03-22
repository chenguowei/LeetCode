//
// Created by 陈国威 on 2018/3/22.
//
//
// 题目：Write a function to find the longest common prefix string amongst an array of strings.
// 翻译：写一个函数（方法），找出字符串数组中的最长公共前缀
// 比如："abcdejfd", "abcdjjkjk", "abcd", "abcdreoj"
//    那么最长的公共前缀是 "abcd"
//


#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution
{
 public:
  string longestCommonPrefix(vector<string>& strs)
  {
    if (strs.empty ())
      return "";

    for (size_t  i = 0; i < strs.front ().size (); ++i) // 先找一个字符串作为比较的基数
      {
        for (const auto &str : strs)
          if (i == str.size () || str[i] != strs.front ().at (i))
            return strs.front ().substr (0, i);
      }
  }
};


#endif //LEETCODE_SOLUTION_H
