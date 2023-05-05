#pragma once
#include<stdio.h>
#include"User.h"
#include <stdlib.h>
#include<malloc.h>

#define ERROR -1
#define OK 1
//�û��ڵ�
typedef struct Node
{
	User* user;						//ÿ���ڵ���һ���û���Ϣ
	struct Node* next;			
}Node;

//�û���
#define MAXSIZE 256
typedef struct SqList
{
	User* base;						//һά�������û���Ϣ
	unsigned int len;				//���鵱ǰ��С
}SqList,*UserList;

SqList L;

//User˳���(����)��ʼ��
int User_Init(UserList L)
{
	(*L).base = (User*)malloc(MAXSIZE*sizeof(User));		//����һ����СΪMAXSIZE��User����
	if (!(*L).base) return ERROR;										//������־
	(*L).len = 0;				
	return OK;																	//�ɹ���־
}

//User˳������û����
void User_Insert(UserList L,User user)
{
	if ((*L).len == MAXSIZE-1) //return ERROR;		//�û��������˳�
	(*L).base[(*L).len] =user;								//���û����
	(*L).len++;
	//(*L).base[(*L).len].UID = (*L).len;
	//return OK;
}

//User˳���ɾ���û�
int User_Delete(UserList L,User UID)
{
	if (!(*L).len == 0) return ERROR;
	//ʹ��KMP�㷨�ҵ�Ŀ��UID���±�λ��,Ȼ�����ɾ������

}

//���һ���û�
User Show_UserList(SqList L,int uid)
{
	return L.base[uid];
}
