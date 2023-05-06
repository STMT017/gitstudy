#include<stdio.h>
#include "UserList.h"
#include"../project1/KMP.h"

//使用KMP算法进行信息匹配

//介于字符匹配速度与字符长度(复杂度)有直接关系,故选择手动分配的索引值进行匹配运算,加快运行速度

//用户信息数字匹配
//选择UID作为索引值,UID将在用户入表时进行自动分配

//图书信息字符+数字匹配
//选择图书序列号NO作为索引值,NO将在图书入库时进行自动分配



//对用户accout和password进行数字匹配
int accout_match(User user, SqList L)
{
	int tmp = user.accout;	
	for (int i = 0; i < L.len; i++)
	{
		int accout = L.base[i].accout;
		if (tmp = accout)
		{						
			return i;		//返回该账号在用户库的位置
		}
	}
	printf("不存在该账号");
	return -1;
}

//根据accout返回用户UID,通过UID直接索引到对应账号的密码进行匹配
const char*  password_match(User user, SqList L)
{
	int uid = accout_match(user, L);		//存放用户UID
	
	//通过该UID寻找到该用户存放的密码与当前密码进行匹配
	if (user.password == L.base[uid].password)
		return "即将进入用户操作界面....";		
	return "输入的密码错误";
}



