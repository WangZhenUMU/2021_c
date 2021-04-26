#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>	
#include<Windows.h>
#include<string.h>
int picture_Size(char* file_Name)
{
	FILE *fp = fopen(file_Name, "rb");
	if (fp == NULL)
	{
		printf("open fail!");
		return -1;
	}
	fseek(fp, 0, SEEK_END);
	int size = ftell(fp);
	fclose(fp);
	return size;
}
int main()
{
	char picture[20];
	printf("please input picture name :>");
	scanf("%s", picture);
	int size = picture_Size(picture);
	printf("picture Size is %d bytes .", size);
	return 0;
}