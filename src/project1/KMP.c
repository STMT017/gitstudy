#include<stdio.h>
#include"User.c"
#include"UserList.c"

//ʹ��KMP�㷨������Ϣƥ��

//�����ַ�ƥ���ٶ����ַ�����(���Ӷ�)��ֱ�ӹ�ϵ,��ѡ���ֶ����������ֵ����ƥ������,�ӿ������ٶ�

//�û���Ϣ����ƥ��
//ѡ��UID��Ϊ����ֵ,UID�����û����ʱ�����Զ�����

//ͼ����Ϣ�ַ�+����ƥ��
//ѡ��ͼ�����к�NO��Ϊ����ֵ,NO����ͼ�����ʱ�����Զ�����



//���û�accout��password��������ƥ��
bool accout_match(User user, SqList L)
{
	int S = user.accout;	
	for (int i = 1; i < L.len; i++)
	{
		int T = L.base[i].accout;
		if (S = T)
		{
			password_match(user, L);
			return true;
		}
	}
	return false;
}

//����accout�����û�UID,ͨ��UIDֱ����������Ӧ�˺ŵ��������ƥ��
bool password_match(User user, SqList L)
{
	int S = user.UID;
	
		
		
	return false;
}



