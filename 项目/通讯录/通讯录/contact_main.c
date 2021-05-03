#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void(*func[8])(Contact *) = { 0,
							  Add_Contact,
							  Find_Contact,
							  Del_Contact,
							  Revise_Contact,
							  Show_All_Contact,
							  Sort_Contact,
							  Empty_All_Contact };
int main()
{
	int n;
	Contact contact;
	Init_Contact(&contact);
	Menu_Contact(&contact);
	while (scanf("%d", &n))
	{
		if (n == 0)
			break;
		if (n < 0 || n>7)
		{
			printf("选择错误，请重新选择。");
			continue;
		}
		(*func[n])(&contact);
		Menu_Contact(&contact);
	}
	Save_Contact(&contact);
	Destroy_Contact(&contact);
	return 0;
}