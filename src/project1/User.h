#pragma once
#include<string.h>

//�û�����
typedef struct User
{
	const char* name;												//�û���
	unsigned int accout;											//�˺�
	const char* password,*old_password;				//���롢������(�����޸�����)
	unsigned short UID;											//�û�UID{1~256}(��Ϊ����)
}User;

//ͨ���˺�Ѱ��UID
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