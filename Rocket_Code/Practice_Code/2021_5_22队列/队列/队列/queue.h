#ifndef __QUEUE_H__
#define __QUEUE_H__
// 链式结构：表示队列 
typedef int QDataType;
typedef struct QListNode
{
	struct QListNode* next;
	QDataType data;
}QNode;

// 队列的结构 
typedef struct Queue
{
	QNode* front;
	QNode* rear;
}Queue;
void QueueInit(Queue* q);// 初始化队列 
void QueuePush(Queue* q, QDataType data);// 队尾入队列 
QDataType QueuePop(Queue* q);// 队头出队列 
QDataType QueueFront(Queue* q);// 获取队列头部元素
QDataType QueueBack(Queue* q);// 获取队列尾部元素
int QueueSize(Queue* q);// 获取队列中有效元素个数 
int QueueEmpty(Queue* q);// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
void QueueDestroy(Queue* q);// 销毁队列 
#endif // !__QUEUE_H__

