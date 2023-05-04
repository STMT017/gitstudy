#include<stdio.h>
#include"User.h"
#include "UserList.c"
#include"KMP.h"


//返回用户UID
int User_UID(const User* usr)
{
	return (*usr).UID;
}



//用户登录
void login()
{
	User tmp;
	printf("请输入账户:");
	scanf("%d\n", &tmp.accout);
	printf("请输入密码:");
	scanf("%d\n", &tmp.password);
	//在用户库中进行KMP字符匹配
	
}

//用户注册

void regist()
{
	//创建新用户并进行初始化
	User new_user;
	//第一步:输入信息
	printf("请输入注册账户:");
	scanf("%d\n", &new_user.accout);
	printf("请输入注册密码:");
	scanf("%d\n", &new_user.password);
	//第二步:记录新用户到用户库(入库)
	User_Insert( &L, new_user);
	printf("注册成功!!!");
	//第三步:回到登录操作
	char* judge="yes";				//默认为yes
	printf("是否进行登录(输入yes/no):");
	scanf("%s", judge);
	if (judge = "yes") {
		login();
	}
	else
	{

	}

	
}

int main()
{
	return 0;
}