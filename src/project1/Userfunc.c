
#include<stdio.h>
#include"User.c"
#include "UserList.c"
#include"KMP.h"


//�����û�UID
int User_UID(const User* usr)
{
	return (*usr).UID;
}








//�û���¼
void login()
{
	User tmp;
	printf("�������˻�:");
	scanf("%d\n", &tmp.accout);
	printf("����������:");
	scanf("%d\n", &tmp.password);
	//���û����н���KMP�ַ�ƥ��
	
}

//�û�ע��

void regist()
{
	//�������û������г�ʼ��
	User new_user;
	//��һ��:������Ϣ
	printf("������ע���˻�:");
	scanf("%d\n", &new_user.accout);
	printf("������ע������:");
	scanf("%d\n", &new_user.password);
	//�ڶ���:��¼���û����û���(���)
	User_Insert( &L, new_user);
	printf("ע��ɹ�!!!");
	//������:�ص���¼����
	login();
}