#include<stdio.h>
#include "UserList.h"
#include"../project1/KMP.h"

int Point() {
	static int index = 0;
	index++;
	return index;
}
//返回用户UID
int User_UID(const User* usr)
{
	return (*usr).UID;
}

//重新输入密码
void again(const User* user)
{
	while ((*user).password != (*user).old_password) {
		printf("两次密码输入不匹配\n");
		printf("请重新输入密码:");
		scanf("%s", &(*user).old_password);
		getchar();
	}
}

//用户登录
void login()
{
	User tmp;
	printf("请输入账户:");
	scanf("%d", &tmp.accout); getchar();
	printf("请输入密码:");
	scanf("%s", &tmp.password); getchar();
	//在用户库中进行KMP字符匹配
	accout_match(tmp,L);

}

//用户注册

void regist()
{
	//创建新用户并进行初始化
	User new_user;
	//第一步:输入信息
	printf("请输入注册账户:");
	scanf("%d", &new_user.accout); getchar();
	printf("请输入注册密码:");
	scanf("%s", &new_user.password); getchar();
	printf("请再次输入注册密码:");
	scanf("%s", &new_user.old_password); getchar();
	if (new_user.password != new_user.old_password) 
	again(&new_user);

	//第二步:记录新用户到用户库(入库)
	new_user.UID = Point();							//分配UID
	User_Insert( &L, new_user);
	printf("注册成功!!!");
	//第三步:回到登录操作
	char judge='y';
	printf("是否进行登录(输入y/n):");
		scanf("%c", &judge);
	if (judge == 'y') {
		login();
	}
	else return;
}

