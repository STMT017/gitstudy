#pragma once
#include<string.h>

//用户属性
typedef struct User
{
	const char* name;												//用户名
	unsigned int accout;											//账号
	const char* password,*old_password;				//密码、旧密码(用于修改密码)
	unsigned short UID;											//用户UID{1~256}(作为索引)
}User;

//通过账号寻找UID
int Show_UID(unsigned int accout)
{

}


/*
int main()
{
 
	User u1={"sxy",17856491475,2367221250};



	return 0;
}
*/