#include<stdio.h>
//#include"fuck.h"

int main(void)
{
	//本程序旨在于更精确的修正C语言程序中所出现的各种难以定位的致命错误和部分虽然语法正确但将使执行不正常的错误
	//在此感谢前人项目给予本项目的启迪：fuckitpy、the fuck
	//本程序使用了C11标准，但是考虑兼容性问题，谁帮忙给搞一下也行

	//论如何做到在控制台内输入【fuck+文件/文件夹】就能实现自动修正
	//论如何实现运行伊始自动加入环境变量
	while (1)
	{
		printf("请输入您想要修正的文件名");
		char fileName[255];
		gets_s(fileName, 255 - 1);
		//然后逐行的检查问题，并在检查到问题的时候throw一个带行数的exception
		//问如何中止这个while循环
		//问如何检测if(a=0)这样的错误
	}

	return 0;
}