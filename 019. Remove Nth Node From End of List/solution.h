//
// Created by 陈国威 on 2018/4/2.
//

/*
 * Given a linked list, remove the nth node from the end of list and return its head.

For example,

   Given linked list: 1->2->3->4->5, and n = 2.

   After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:
Given n will always be valid.
Try to do this in one pass.

 中文翻译：
 	给定一个链表，删除链表的倒数第 n 个节点并返回头结点。

例如，

给定一个链表: 1->2->3->4->5, 并且 n = 2.

当删除了倒数第二个节点后链表变成了 1->2->3->5.


说明:

给的 n 始终是有效的。

尝试一次遍历实现。
 * */

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <iostream>

using namespace std;

struct ListNode
{
  int 	val;
  ListNode*	next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
 public:
  ListNode* removeNthFromEnd(ListNode* head, int n)
  {
	if (head == NULL)
	  return NULL;

	ListNode* au;
	ListNode* prev = head;	//慢指针
	ListNode* ne = head;	// 快指针

	for (int i = 0; i < n; ++i)
	  {
		ne = ne->next;
	  }
	if (ne == NULL)
	  {
		au = head->next;
		delete head;
		return au;
	  }


	while (ne->next != NULL)
	  {
		ne = ne->next;
		prev = prev->next;
	  }

	delete prev->next;
	prev->next = prev->next->next;

	return head;
  }
};

#endif //LEETCODE_SOLUTION_H
