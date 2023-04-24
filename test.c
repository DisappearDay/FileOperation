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
