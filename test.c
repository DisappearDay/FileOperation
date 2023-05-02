#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int n = 10000;
	FILE* ps=fopen("test.txt","wb");
	fwrite(&n, 4, 1, ps);
	fclose(ps);
	ps = NULL;
	
	return 0;
}

//int main()
//{
//	while (1)
//	{
//
//		printf("hehe ");
//	}
//}

//写一个字符型的数据到文件内
//int main()
//{
//	//打开文件
//	FILE* pf=fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//关闭文件
//	fclose(pf);
//	pf=NULL;
//	return 0;
//}


//读一个字符型
int main()
{
	//打开文件
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	printf("%c ", fgetc(pf));
	printf("%c ", fgetc(pf));
	printf("%c ",fgetc(pf));
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}
int main()
{
	int ch=fgetc(stdin);
	fputc(ch,stdout);
	return 0;
}
