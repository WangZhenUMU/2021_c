#include"slist.h"
#include"stdlib.h"
#include<assert.h>
//动态申请一个节点
SListNode* BuySListNode(SLTDateType x) 
{
	SListNode *node = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == node)
	{
		print("BUYSListNode Error！");
		return NULL;
	}
	node->data = x;
	node->next = NULL;
	return node;
}
// 单链表打印
void SListPrint(SListNode* plist)
{
	SListNode *current = plist;
	while (current)
	{
		printf("%d --> ", current->data);
		current = current->next;
	}
	printf("NULL");
}
// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(pplist != NULL);
	SListNode *current = *pplist;
	if (*pplist==NULL)
	{
		*pplist = BuySListNode(x);
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = BuySListNode(x);
	}
}
// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	assert(pplist != NULL);
	SListNode *current = *pplist;
	if (current == NULL)
	{
		return;
	}
	else if (current->next == NULL)
	{
		free(current);
		current = NULL;
	}
	else
	{
		while (current->next->next)
		{
			current = current->next;
		}
		free(current->next);
		current->next = NULL;
	}
}
// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist != NULL);
	SListNode *node = BuySListNode(x);
	node->next = pplist;
	*pplist=node;
}
// 单链表头删
void SListPopFront(SListNode** pplist)
{
	SListNode *current = NULL;
	assert(pplist != NULL);
	if (*pplist == NULL)
	{
		return;
	}
	else
	{
		current = *pplist;
		*pplist = (*pplist)->next;
		free(current);
	}
}
// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x);
// 单链表在pos位置之后插入x
// 分析思考为什么不在pos位置之前插入？
void SListInsertAfter(SListNode* pos, SLTDateType x);
// 单链表删除pos位置之后的值
// 分析思考为什么不删除pos位置？
void SListEraseAfter(SListNode* pos);
// 单链表的销毁
void SListDestory(SListNode* plist);