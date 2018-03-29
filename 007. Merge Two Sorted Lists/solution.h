//
// Created by 陈国威 on 2018/3/27.
//
/*
 *
 * 题目：
 * Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4

 中文题目：
  合并两个已排序的链表，并将其作为一个新列表返回。新列表应该通过拼接前两个列表的节点来完成。
 * */

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL)
  {

  }
};


class Solution
{
 public:
  ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
  {
    ListNode* p1 = l1;
    ListNode* p2 = l2;

    ListNode* temp = NULL;

    while (p1 != NULL && p2 !=NULL)
      {
        if (p1->val < p2->val)
          {
            p1 = p1->next;
          }
        else if (p1->val >= p2->val)
          {
            temp = p2->next;
            p2->next = p1->next;
            p1->next = p2;
            p1 = p2->next;
            p2 = temp;
          }
      }

    if (p1 == NULL && p2 != NULL)
      p1->next = p2;

    return l1;
  }

  // 网上的答案
  ListNode* mergeTwoLists1(ListNode* l1, ListNode* l2)
  {
    ListNode dump(INT_MIN);
    ListNode* tail = &dump;

    while (l1 && l2)
      {
        if (l1->val < l2->val)
          {
            tail->next = l1;
            l1 = l1->next;
          }
        else
          {
            tail->next = l2;
            l2 = l2->next;
          }
        tail = tail->next;
      }

    tail->next = l1 ? l1 : l2;

    return dump.next;
  }

};

#endif //LEETCODE_SOLUTION_H
