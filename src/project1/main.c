#include<stdio.h>
#include<stdlib.h>
#include "User.c"
#include"KMP.h"

/*
* C语言程序设计---小型图书管理系统
* 结构:
* 图书属性:书名、书号、作者、出版时间、状态等
* 用户属性:用户名、密码、用户诚信值
* 功能模块:
* 一、用户:
*	1)用户登录:用户账号、密码、注销、修改密码等
*	2)用户权限:分为普通用户和管理员
* 二、图书:
*  1)索引:根据图书属性查找
*  2)借阅:
*  3)归还:判断是否逾期,用户诚信值
*  4)入库/出库:对增加/减少的图书进行记录,更新图书库(需要管理员权限)
*  5)数量统计:由管理员进行统计
* 三、库及库管理
*  1)用户库
*		1>用户表UserList
*		2>
*  2)图书库Lib_mysql
*/


int main()
{
	int t = 0;

	printf("|____________________________________________________|\n");
	printf("|********************登录界面************************|\n");
	printf("|****************************************************|\n");
	printf("|************账号[__输入1开始登录__]*****************|\n");
	printf("|************密码[__________________]*****************|\n");
	printf("|****************************************************|\n");
	printf("|************[注册]************[登录]****************|\n");
	printf("|***********输入2注册********输入3登录***************|\n");
	printf("|____________________________________________________|\n");

	printf("输入的数:");
	scanf("%d\n", &t);

	switch (t)
	{
		case 1:
		{


		}
		case 2:
		{

		}
	}
	return 0;
}