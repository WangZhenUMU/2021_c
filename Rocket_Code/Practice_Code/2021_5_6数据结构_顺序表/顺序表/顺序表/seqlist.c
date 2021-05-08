#include"seqlist.h"
// ˳����ʼ��
void SeqListInit(SeqList* psl, size_t capacity)
{
	assert(psl != NULL);
	if (capacity == 0)
	{
		printf("input capacity error!");
		return 0;
	}
	psl->array = (SeqList*)malloc(sizeof(SeqList)*capacity);
	assert(psl->array != NULL);
	psl->capicity = capacity;
	psl->size = 0;
}
// ˳�������
void SeqListDestory(SeqList* psl)
{
	assert(psl != NULL);
	free(psl->array);
	if (psl->array != NULL)
	{
		psl = NULL;
		psl->capicity = psl->size = 0;
	}
}
// ˳����ӡ
void SeqListPrint(SeqList* psl)
{
	assert(psl != NULL);
	if (psl->array != NULL)
	{
		for (int i; i < psl->size; i++)
			printf("%-7d", &psl->array[i]);
	}
}
// ���ռ䣬������ˣ���������
void CheckCapacity(SeqList* psl) 
{
	assert(psl != NULL);
	if (psl->size >= psl->capicity)
	{
		psl->array = realloc(psl->array, psl->capicity * 2);
		psl->capicity *= 2;
	}
}
// ˳���β��
void SeqListPushBack(SeqList* psl, SLDataType x) 
{
	assert(psl != NULL);
	CheckCapacity(psl);
	psl->array[psl->size] = x;
	psl->size++;
}
// ˳���βɾ
void SeqListPopBack(SeqList* psl)
{

}
// ˳���ͷ��
void SeqListPushFront(SeqList* psl, SLDataType x)
{

}
// ˳���ͷɾ
void SeqListPopFront(SeqList* psl)
{

}
// ˳������
int SeqListFind(SeqList* psl, SLDataType x) 
{

}
// ˳�����posλ�ò���x
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
{

}
// ˳���ɾ��posλ�õ�ֵ
void SeqListErase(SeqList* psl, size_t pos)
{

}