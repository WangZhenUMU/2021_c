#include<stdio.h>
#include<assert.h>
#include"linklist.h"
//����һ����㣬��̬���١�
LinkNode* BuyLinkNode(DataType x)
{
	assert(x != NULL);
	LinkNode* ret = (LinkNode*)malloc(sizeof(LinkNode));
	return ret;
}
//���������ʼ��
LinkNode* InitLinkList()
{
	LinkNode* head = (LinkNode*)malloc(sizeof(LinkNode));
	head= NULL;
}
//��������β��
void PushBackLinkList(LinkNode **head, DataType val)
{

}
//��������βɾ
void PopBackLinkList(LinkNode **head)
{

}
//��������ͷ��
void PushFrontLinkList(LinkNode **head, DataType val)
{

}
//��������ͷɾ
void PopFrontLinkList(LinkNode **head)
{

}
//������������λ�ú����
void InsertAfterLinkList(LinkNode *pos, DataType val)
{

}
//ɾ��������������λ�ú��Ԫ��
void EraseAfterLinkList(LinkNode *pos)
{

}
//���������󳤶�
int LengthLinkList(LinkNode *head)
{

}
//�����������
LinkNode* GetLinkList(LinkNode *head, DataType val)
{

}
//������������
void DestoryLinkList(LinkNode **head)
{

}