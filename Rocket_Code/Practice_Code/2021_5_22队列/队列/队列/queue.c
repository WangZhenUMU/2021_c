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
// 初始化队列 
void QueueInit(Queue* q)
{
	assert(q);
	q->front = q->rear = BuyQueueNode(0);
}
// 队尾入队列 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	q->rear->next = BuyQueueNode(data);
	q->rear = q->rear->next;
}
// 队头出队列 
QDataType QueuePop(Queue* q)
{
	assert(q);
	if (QueueEmpty(q)) //如果为空直接跳出函数
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
// 获取队列头部元素 
QDataType QueueFront(Queue* q)
{
	assert(q);
	if (QueueEmpty(q))
		return 0;
	return q->front->next->data;
}
// 获取队列尾部元素 
QDataType QueueBack(Queue* q)
{
	assert(q);
	if (QueueEmpty(q))
		return 0;
	return q->rear->data;
}
// 获取队列中有效元素个数 
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
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q)
{
	assert(q);
	return NULL == q->front->next;
}
// 销毁队列 
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

