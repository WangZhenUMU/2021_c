#include<stdio.h>
#include<assert.h>
#include"linklist.h"
//申请一个结点，动态开辟。
LinkNode* BuyLinkNode(DataType x)
{
	assert(x != NULL);
	LinkNode* ret = (LinkNode*)malloc(sizeof(LinkNode));
	return ret;
}
//单向链表初始化
LinkNode* InitLinkList()
{
	LinkNode* head = (LinkNode*)malloc(sizeof(LinkNode));
	head= NULL;
}
//单向链表尾插
void PushBackLinkList(LinkNode **head, DataType val)
{

}
//单向链表尾删
void PopBackLinkList(LinkNode **head)
{

}
//单向链表头插
void PushFrontLinkList(LinkNode **head, DataType val)
{

}
//单向链表头删
void PopFrontLinkList(LinkNode **head)
{

}
//单向链表任意位置后插入
void InsertAfterLinkList(LinkNode *pos, DataType val)
{

}
//删除单向链表任意位置后的元素
void EraseAfterLinkList(LinkNode *pos)
{

}
//单向链表求长度
int LengthLinkList(LinkNode *head)
{

}
//单向链表查找
LinkNode* GetLinkList(LinkNode *head, DataType val)
{

}
//单向链表销毁
void DestoryLinkList(LinkNode **head)
{

}