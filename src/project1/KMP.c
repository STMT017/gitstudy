#include<stdio.h>
#include"User.h"
#include"UserList.c"

//ʹ��KMP�㷨������Ϣƥ��

//�����ַ�ƥ���ٶ����ַ�����(���Ӷ�)��ֱ�ӹ�ϵ,��ѡ���ֶ����������ֵ����ƥ������,�ӿ������ٶ�

//�û���Ϣ����ƥ��
//ѡ��UID��Ϊ����ֵ,UID�����û����ʱ�����Զ�����

//ͼ����Ϣ�ַ�+����ƥ��
//ѡ��ͼ�����к�NO��Ϊ����ֵ,NO����ͼ�����ʱ�����Զ�����



//���û�accout��password��������ƥ��
int accout_match(User user, SqList L)
{
	int S = user.accout;	
	for (int i = 1; i < L.len; i++)
	{
		int T = L.base[i].accout;
		if (S = T)
		{															//����������֤
			return i;
		}
	}
	return -1;
}

//����accout�����û�UID,ͨ��UIDֱ����������Ӧ�˺ŵ��������ƥ��
const char*  password_match(User user, SqList L)
{
	int uid = accout_match(user, L);		//����û�UID
	
	//ͨ����UIDѰ�ҵ����û���ŵ������뵱ǰ�������ƥ��
	if (user.password != L.base[uid].password)
	{
		return "������������";
	}
	else
	{
		//�����û�����

		return;
	}
		
	return false;
}



