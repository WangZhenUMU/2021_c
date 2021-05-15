#include"slist.h"
#include"stdlib.h"
#include<assert.h>
//��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x) 
{
	SListNode *node = (SListNode*)malloc(sizeof(SListNode));
	if (NULL == node)
	{
		print("BUYSListNode Error��");
		return NULL;
	}
	node->data = x;
	node->next = NULL;
	return node;
}
// �������ӡ
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
// ������β��
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
// �������βɾ
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
// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(pplist != NULL);
	SListNode *node = BuySListNode(x);
	node->next = pplist;
	*pplist=node;
}
// ������ͷɾ
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
// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDateType x);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);
// �����������
void SListDestory(SListNode* plist);