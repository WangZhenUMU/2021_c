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
void Menu_Contact(Contact *p);//通讯录菜单
void Init_Contact(Contact *p);//初始化通讯录
void Add_Contact(Contact *p);//添加
void Show_Contact(Person *p);//显示
void Find_Contact(Contact *p);//查找
void Del_Contact(Contact *p);//删除
void Revise_Contact(Contact *p);//修改
void Show_All_Contact(Contact *p);//显示所有
void Empty_All_Contact(Contact *p);//清空所有
void Sort_Contact(Contact *p);//排序
void Load_Contact(Contact *p);//载入
void Save_Contact(Contact *p);//存储
void Destroy_Contact(Contact *p);//销毁通讯录
#endif // !_CONTACT_H_
