#pragma once
#include<stdio.h>
#include"User.h"
#include <stdlib.h>
#include<malloc.h>

#define ERROR -1
#define OK 1
//用户节点
typedef struct Node
{
	User* user;						//每个节点存放一个用户信息
	struct Node* next;			
}Node;

//用户表
#define MAXSIZE 256
typedef struct SqList
{
	User* base;						//一维数组存放用户信息
	unsigned int len;				//数组当前大小
}SqList,*UserList;

SqList L;

//User顺序表(数组)初始化
int User_Init(UserList L)
{
	(*L).base = (User*)malloc(MAXSIZE*sizeof(User));		//分配一个大小为MAXSIZE的User数组
	if (!(*L).base) return ERROR;										//报错日志
	(*L).len = 0;				
	return OK;																	//成功日志
}

//User顺序表新用户入表
void User_Insert(UserList L,User user)
{
	if ((*L).len == MAXSIZE-1) //return ERROR;		//用户表满了退出
	(*L).base[(*L).len] =user;								//新用户入表
	(*L).len++;
	//(*L).base[(*L).len].UID = (*L).len;
	//return OK;
}

//User顺序表删除用户
int User_Delete(UserList L,User UID)
{
	if (!(*L).len == 0) return ERROR;
	//使用KMP算法找到目标UID的下标位置,然后进行删除操作

}

//输出一个用户
User Show_UserList(SqList L,int uid)
{
	return L.base[uid];
}
