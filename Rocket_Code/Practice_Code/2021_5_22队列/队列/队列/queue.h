#ifndef __QUEUE_H__
#define __QUEUE_H__
// ��ʽ�ṹ����ʾ���� 
typedef int QDataType;
typedef struct QListNode
{
	struct QListNode* next;
	QDataType data;
}QNode;

// ���еĽṹ 
typedef struct Queue
{
	QNode* front;
	QNode* rear;
}Queue;
void QueueInit(Queue* q);// ��ʼ������ 
void QueuePush(Queue* q, QDataType data);// ��β����� 
QDataType QueuePop(Queue* q);// ��ͷ������ 
QDataType QueueFront(Queue* q);// ��ȡ����ͷ��Ԫ��
QDataType QueueBack(Queue* q);// ��ȡ����β��Ԫ��
int QueueSize(Queue* q);// ��ȡ��������ЧԪ�ظ��� 
int QueueEmpty(Queue* q);// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
void QueueDestroy(Queue* q);// ���ٶ��� 
#endif // !__QUEUE_H__

