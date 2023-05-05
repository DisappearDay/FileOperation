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
//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "r");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//
//	fgets(arr, 1024, pf);
//  puts(pf);
//	printf("%s", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf==NULL)
//	{
//		return 0;
//	}
//
//	fputs("hello\n", pf);
//	fputs("world",pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	char arr[1024] = { 0 };
//	//fgets(arr,1024,stdin);
//	//fputs(arr, stdout);
//
//	gets(arr);  //等价于上面的
//	puts(arr);
//
//	return 0;
//
//}

struct S
{
	int a;
	float b;
	char arr[1024];
};


//int main()
//{
//	struct S s = { 10,3.14,"abcdef" };
//	FILE* pf = fopen("text.txt", "w");
//	if (pf==NULL) 
//	{
//		return 0;
//	}
//	
//	fprintf(pf,"%d\n""%f\n""%s",s.a,s.b,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//  //是针对所有输入/输出流 格式化输入/输出语句
//	fscanf(pf, "%d\n""%f\n""%s", &(s.a), &(s.b), s.arr);
//	printf("%d " "%.2f " "%s ",s.a,s.b,s.arr);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

int main()
{
	struct S s = { 10,3.14,"abcdef" };
	char arr[1024] = { 0 };
	FILE* pf = fopen("text.txt", "w");
	if (pf==NULL) 
	{
		return 0;
	}
	//把格式化的数据输出成（存储到）字符串中
	sprintf(arr,"%d\n""%f\n""%s",s.a,s.b,s.arr);
	printf("%s\n", arr);

	fclose(pf);
	pf = NULL;

	return 0;
}
struct tmp
{
	char arr[10];
	int a;
	double b;
};

//int main()
//{
//	struct tmp t = { "zhangsan",20,2.4 };
//	FILE* pf = fopen("text.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	fwrite(&t, sizeof(struct tmp), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	//struct tmp t = { "zhangsan",20,2.4 };
	struct tmp m = { 0 };
	FILE* pf = fopen("text.txt", "rb");
	if (pf == NULL)
	{
		return 0;
	}

	fread(&m, sizeof(struct tmp), 1, pf);
	printf("%s ""%d ""%f ",m.arr,m.a,m.b);

	fclose(pf);
	pf = NULL;
	return 0;
}
