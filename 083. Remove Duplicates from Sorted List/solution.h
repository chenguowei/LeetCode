//
// Created by 陈国威 on 2018/3/30.
//

/*
 * 题目：
 * Given a sorted linked list, delete all duplicates such that each element appear only once.

	For example,
	Given 1->1->2, return 1->2.
	Given 1->1->2->3->3, return 1->2->3.

 中文翻译：
 	给定一个排序链表，删除所有重复的元素使得每个元素只留下一个。


	案例：

	给定 1->1->2，返回 1->2

	给定 1->1->2->3->3，返回 1->2->3


 * */

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <iostream>

using namespace std;

struct ListNode
{
  int val;
  ListNode*	next;
  ListNode(int x) : val(x), next(NULL){}
};

class Solution
{
 public:
  ListNode* deleteDuplicates(ListNode* head)
  {
	if (head == NULL)
	  return NULL;
	ListNode* p1 = head;
	ListNode* p2 = head->next;

	while (p2)
	  {
		if (p1->val == p2->val)
		  {
			p1->next = p2->next;
			delete p2;
			p2 = p1->next;
		  }
		else
		  {
			p1 = p2;
			p2 = p2->next;
		  }
	  }

	return head;
  }

};
#endif //LEETCODE_SOLUTION_H
