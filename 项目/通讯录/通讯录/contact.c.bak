#include"contact.h"
void Menu_Contact(Contact *p)//通讯录菜单
{
	assert(p != NULL);
	printf("**************************************\n");
	printf("*************** 通讯录 ***************\n");
	printf("**************************************\n");
	printf("****** 【1】添加  || 【2】查找  ******\n");
	printf("****** 【3】删除  || 【4】修改  ******\n");
	printf("****** 【5】显示  || 【6】排序  ******\n");
	printf("****** 【7】清空  || 【0】退出  ******\n");
	printf("************ 总容量:%-4d *************\n",p->cap);
	printf("************ 已存入:%-4d *************\n",p->used);
	printf("**************************************\n");
}

void Init_Contact(Contact *p)//初始化通讯录
{
	assert(p != NULL);
	int size;
	printf("请输入通讯录的总容量:> ");
	scanf("%d", &size);
	p->cap = size;
	p->data = (Person*)calloc(p->cap,sizeof(Person));
	assert(p->data != NULL);
	p->used = 0;
	Load_Contact(p);
	printf("初始化成功！\n");
	system("pause");
	system("cls");
}
///////////////////////////////////////////////////////////////////////////
void Add_Contact(Contact *p)//添加
{
	assert(p != NULL);
	if (p->cap == p->used)
	{
		printf("已存满\n");
		return;
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", p->data[p->used].Name);
		printf("请输入性别:>");
		scanf("%s", p->data[p->used].Sec);
		printf("请输入年龄:>");
		scanf("%d", &p->data[p->used].Age);
		printf("请输入地址:>");
		scanf("%s", p->data[p->used].Address);
		printf("请输入电话:>");
		scanf("%s", p->data[p->used].Tel);
		p->used++;
		printf("添加成功！\n");
	}
	system("pause");
	system("cls");
}
////////////////////////////////////////////////////////////////////////////
void Show_Contact(Person *p)//显示
{
	assert(p != NULL);
	printf("%-12s\t", p->Name);
	printf("%-8s\t", p->Sec);
	printf("%-6d\t", p->Age);
	printf("%-20s\t", p->Address);
	printf("%-15s\n", p->Tel);
}
///////////////////////////////////////////////////////////////////////////
void Find_Contact(Contact *p)//查找
{
	assert(p != NULL);
	printf("请输入要查找的用户名:>");
	char name[32];
	int num=0;
	scanf("%s", name);
	for (unsigned int i = 0; i < p->used; i++)
	{
		if (strcmp(p->data[i].Name, name)==0)
		{
			Show_Contact(&p->data[i]);
			num++;
		}
	}
	if (num == 0)
		printf("没有找到！\n");
	else
		printf("共找到%d个\n",num);
	system("pause");
	system("cls");
}
///////////////////////////////////////////////////////////////////////////
void Del_Contact(Contact *p)//删除
{
	assert(p != NULL);
	printf("请输入要删除的用户名:>");
	char name[32];
	int num = 0;
	scanf("%s", name);
	for (unsigned int i = 0; i < p->used; i++)
	{
		if (strcmp(p->data[i].Name, name) == 0)
		{
			unsigned int j;
			for ( j = i; j < p->used - 1; j++)
			{
				strcpy(p->data[j].Name, p->data[j + 1].Name);
				strcpy(p->data[j].Sec, p->data[j + 1].Sec);
				p->data[j].Age = p->data[j + 1].Age;
				strcpy(p->data[j].Address, p->data[j + 1].Address);
				strcpy(p->data[j].Tel, p->data[j + 1].Tel);
			}
			p->used--;
			memset(&p->data[j], 0, sizeof(p->data[j]));/************/
			num++;
		}
	}
	num == 0 ? printf("删除失败，没有找到！\n") : ("删除成功，共删除%d个！\n", num);
	system("pause");
	system("cls");
}
//////////////////////////////////////////////////////////////////
void Revise_Contact(Contact *p)//修改
{
	assert(p != NULL);
	printf("请输入要修改的用户名:>");
	char name[32];
	int num = 0;
	int n = 0;
	scanf("%s", name);
	for (unsigned int i = 0; i < p->used; i++)
	{
		if (strcmp(p->data[i].Name, name) == 0)
		{

			int opt;
			Show_Contact(&p->data[i]);
			printf("是否修改这个用户（0/1）:>");
			scanf("%d", &opt);
			if (opt == 1)
			{
				int s;
				//printf("请选择你想修改的内容：>\n①姓名 ②性别 ③年龄 ④地址 ⑤电话 〇退出\n");
				while (printf("请选择你想修改的内容：>\n①姓名 ②性别 ③年龄 ④地址 ⑤电话 〇退出\n"),scanf("%d", &s))
				{
					if (s == 0)
						break;
					switch (s)
					{
					case 1:
						printf("请输入姓名:>");
						scanf("%s", p->data[i].Name);
						break;
					case 2:
						printf("请输入性别:>");
						scanf("%s", p->data[i].Sec);
						break;
					case 3:
						printf("请输入年龄:>");
						scanf("%d", &p->data[i].Age);
						break;
					case 4:
						printf("请输入地址:>");
						scanf("%s", p->data[i].Address);
						break;
					case 5:
						printf("请输入电话:>");
						scanf("%s", p->data[i].Tel);
						break;
					default:
						printf("选择错误！\n");
						break;
					}
				}
				printf("\n修改成功!\n");
				n++;

			}
			num++;
		}
	}
	printf("共找到%d个，修改%d个！\n", num, n);
	system("pause");
	system("cls");
}
void Show_All_Contact(Contact *p)//显示所有
{
	assert(p != NULL);
	for (unsigned int i = 0; i < p->used; i++)
	{
		Show_Contact(&p->data[i]);
	}
	system("pause");
	system("cls");
}
void Empty_All_Contact(Contact *p)//清空所有
{
	assert(p != NULL);
	printf("确定要清空通讯录吗?<0/1> :>");
	int opt;
	scanf("%d", &opt);
	if (opt==0)
		return;
	p->used = 0;
	memset(p->data, 0, sizeof(p->data));
	printf("清空成功！\n");
	system("pause");
	system("cls");
}
void Sort_Contact(Contact *p)//排序
{
	assert(p != NULL);
	for (unsigned int i = 0; i < p->used; i++)
	{
		for (unsigned int j = 0; j < p->used - i - 1; i++)
		{
			if (strcmp(p->data[j].Name, p->data[j + 1].Name) > 0)
			{
				Person temp = p->data[j];
				p->data[j] = p->data[j + 1];
				p->data[j + 1] = temp;
			}
		}
	}
	printf("排序成功！\n");
	system("pause");
	system("cls");
}
void Load_Contact(Contact *p)//载入
{
	assert(p != NULL);
	FILE *fp = fopen("contact.dat","r");
	assert(fp != NULL);
	while (!feof(fp))
	{
		if (p->cap == p->used)
		{
			printf("已存满\n");
			return;
		}
		int res = fscanf(fp, "%s%s%d%s%s", p->data[p->used].Name,
										   p->data[p->used].Sec,
										   &p->data[p->used].Age,
										   p->data[p->used].Address,
			                               p->data[p->used].Tel);
		if (res == EOF)//判断是否达到文件尾
			break;
		p->used++;
	}
	fclose(fp);
	printf("加载成功!\n");
}
void Save_Contact(Contact *p)//存储
{
	assert(p != NULL);
	FILE *fp = fopen("contact.dat", "w");
	assert(fp != NULL);
	for (unsigned int i = 0; i < p->used; i++)
	{
		fprintf(fp, "%-12s", p->data[i].Name);
		fprintf(fp, "%-8s", p->data[i].Sec);
		fprintf(fp, "%-6d", p->data[i].Age);
		fprintf(fp, "%-20s", p->data[i].Address);
		fprintf(fp, "%-15s", p->data[i].Tel);
	}
	fclose(fp);
	printf("保存成功！\n");
}
void Destroy_Contact(Contact *p)//销毁通讯录
{
	assert(p != NULL);
	free(p->data);
	p->data = NULL;
	p->cap = p->used = 0;
	printf("清理成功!\n");
}