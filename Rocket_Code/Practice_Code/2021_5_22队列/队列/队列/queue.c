#include<assert.h>
#include<stdlib.h>
#include"queue.h"
QNode* BuyQueueNode(QDataType data)
{
	QNode* node = (QNode*)malloc(sizeof(QNode));
	if (NULL == node)
	{
		assert(0);
		return NULL;
	}
	node->data = data;
	node->next = NULL;
	return node;
}
// ��ʼ������ 
void QueueInit(Queue* q)
{
	assert(q);
	q->front = q->rear = BuyQueueNode(0);
}
// ��β����� 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	q->rear->next = BuyQueueNode(data);
	q->rear = q->rear->next;
}
// ��ͷ������ 
QDataType QueuePop(Queue* q)
{
	assert(q);
	if (QueueEmpty(q)) //���Ϊ��ֱ����������
		return 0;
	QNode* DelNode = q->front->next;
	QDataType temp = DelNode->data;
	q->front->next = DelNode->next;
	if (q->front->next == 0)
	{
		q->rear = q->front;
	}
	free(DelNode);
	return temp;
}
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	if (QueueEmpty(q))
		return 0;
	return q->front->next->data;
}
// ��ȡ����β��Ԫ�� 
QDataType QueueBack(Queue* q)
{
	assert(q);
	if (QueueEmpty(q))
		return 0;
	return q->rear->data;
}
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q)
{
	assert(q);
	int count = 0;
	QNode* pcurrent = q->front->next;
	while (pcurrent)
	{
		count++;
		pcurrent = pcurrent->next;
	}
	return count;
}
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q)
{
	assert(q);
	return NULL == q->front->next;
}
// ���ٶ��� 
void QueueDestroy(Queue* q)
{
	assert(q);
	QNode* pcurrent = q->front;
	while (pcurrent)
	{
		q->front = pcurrent->next;
		free(pcurrent);
		pcurrent = q->front;
	}
	q->rear = NULL;
	free(q);
	q = NULL;
}

