//静态存储区理解

#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"stdlib.h"
#include"string.h"


char * getStr1()
{
	char * p1 = "abcdef";
	return p1;
}

char * getStr2()
{
	char * p2 = "abcdef2";
	return p2;
}

char * getStr3()
{
	char * p3 = "abcdef2";
	return p3;
}

void main()
{
	char * p1 = NULL;
	char * p2 = NULL;
	p1 = getStr1();
	p2 = getStr2();

	//打印p1  p2   p3所指内存空间的数据
	printf("p1:%s\t,p2:%s\t,p3:%s\t\n",p1,p2,p3);

	//打印p1  p2  p3的值
	printf("p1:%d\t,p2:%d\t,p3:%d\t\n",p1,p2,p3);
 

}