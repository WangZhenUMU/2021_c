#ifndef __LINKLIST_H__
#define __LINKLIST_H__
typedef int DataType;
typedef struct LinkNode
{
	DataType Data;
	LinkNode *next;
}LinkNode;
//����һ����㣬��̬���١�
LinkNode* BuyLinkNode(DataType x);
//���������ʼ��
LinkNode* InitLinkList();
//��������β��
void PushBackLinkList(LinkNode **head, DataType val);
//��������βɾ
void PopBackLinkList(LinkNode **head);
//��������ͷ��
void PushFrontLinkList(LinkNode **head, DataType val);
//��������ͷɾ
void PopFrontLinkList(LinkNode **head);
//������������λ�ú����
void InsertAfterLinkList(LinkNode *pos, DataType val);
//ɾ��������������λ�ú��Ԫ��
void EraseAfterLinkList(LinkNode *pos);
//���������󳤶�
int LengthLinkList(LinkNode *head);
//�����������
LinkNode* GetLinkList(LinkNode *head,DataType val);
//������������
void DestoryLinkList(LinkNode **head);
#endif // !__LINKLIST_H__
