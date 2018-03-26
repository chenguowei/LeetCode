//
// Created by 陈国威 on 2018/3/26.
//

/*
 * 题目
 * Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

	The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

 中文题目：
	 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

	括号必须以正确的顺序关闭，"()" 和 "()[]{}" 是有效的但是 "(]" 和 "([)]" 不是。
 * */

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <stack>
#include <string>
#include <map>

using namespace std;

class Solution
{
 public:
  bool isValid(string s)
  {
	if (s == "")
	  return true;

	stack<char> st;
	for (char c : s)
	  {
		switch(c)
		  {
			case '(':
			case '{':
			case '[':
			  st.push (c);
			break;

			case ')':
			  if (st.empty () || st.top () != '(')
				return false;
			  else
				{
				  st.pop ();
				  break;
				}
			case ']':
			  if (st.empty () || st.top () != '[')
				return false;
			  else
				{
				  st.pop();
				  break;
				}
			case '}':
			  if (st.empty () || st.top () != '{')
				return false;
			  else
				{
				  st.pop ();
				  break;
				}
		  }
	  }

	if (!st.empty ())
	  return false;

	return true;
  }

  // 网上的答案 看起来比较简洁
  bool isValid1(string s)
  {
	stack<char> temp;
	map<char, char> m = { {']', '['}, {')', '('}, {'}', '{'} };

	for (int i = 0; i < s.size(); ++i)
	  {
		if (s[i] == '[' || s[i] == '(' || s[i] == '{')
		  {
			temp.push (s[i]);
		  }
		  else if (s[i] == ']' || s[i] == ')' || s[i] == '}')
		  {
			if (temp.empty () || temp.top () != m[s[i]])
			  return false;
			else
			  temp.pop ();
		  }
	  }

	return temp.empty ();
  }
};

#endif //LEETCODE_SOLUTION_H
