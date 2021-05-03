#ifndef _CONTACT_H_
#define _CONTACT_H_
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<Windows.h>
typedef struct Person
{
	char Name[8];
	char Sec[4];
	char Address[16];
	char Tel[11];
	int Age;
}Person;
typedef struct Contact
{
	Person* data;
	unsigned int cap;
	unsigned int used;
}Contact;
void Menu_Contact(Contact *p);//ͨѶ¼�˵�
void Init_Contact(Contact *p);//��ʼ��ͨѶ¼
void Add_Contact(Contact *p);//���
void Show_Contact(Person *p);//��ʾ
void Find_Contact(Contact *p);//����
void Del_Contact(Contact *p);//ɾ��
void Revise_Contact(Contact *p);//�޸�
void Show_All_Contact(Contact *p);//��ʾ����
void Empty_All_Contact(Contact *p);//�������
void Sort_Contact(Contact *p);//����
void Load_Contact(Contact *p);//����
void Save_Contact(Contact *p);//�洢
void Destroy_Contact(Contact *p);//����ͨѶ¼
#endif // !_CONTACT_H_
