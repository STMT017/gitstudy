#include<stdio.h>
#include "UserList.h"
#include"../project1/KMP.h"

int Point() {
	static int index = 0;
	index++;
	return index;
}
//�����û�UID
int User_UID(const User* usr)
{
	return (*usr).UID;
}

//������������
void again(const User* user)
{
	while ((*user).password != (*user).old_password) {
		printf("�����������벻ƥ��\n");
		printf("��������������:");
		scanf("%s", &(*user).old_password);
		getchar();
	}
}

//�û���¼
void login()
{
	User tmp;
	printf("�������˻�:");
	scanf("%d", &tmp.accout); getchar();
	printf("����������:");
	scanf("%s", &tmp.password); getchar();
	//���û����н���KMP�ַ�ƥ��
	accout_match(tmp,L);

}

//�û�ע��

void regist()
{
	//�������û������г�ʼ��
	User new_user;
	//��һ��:������Ϣ
	printf("������ע���˻�:");
	scanf("%d", &new_user.accout); getchar();
	printf("������ע������:");
	scanf("%s", &new_user.password); getchar();
	printf("���ٴ�����ע������:");
	scanf("%s", &new_user.old_password); getchar();
	if (new_user.password != new_user.old_password) 
	again(&new_user);

	//�ڶ���:��¼���û����û���(���)
	new_user.UID = Point();							//����UID
	User_Insert( &L, new_user);
	printf("ע��ɹ�!!!");
	//������:�ص���¼����
	char judge='y';
	printf("�Ƿ���е�¼(����y/n):");
		scanf("%c", &judge);
	if (judge == 'y') {
		login();
	}
	else return;
}

