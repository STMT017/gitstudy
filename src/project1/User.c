#include<string.h>

//�û�����
typedef struct User
{
	const char* name;								//�û���
	unsigned int accout,password;			//�˺�+����
	unsigned int old_password;				//������(�����޸�����)
	unsigned short UID;							//�û�UID{1~256}(��Ϊ����)
}User;





int main()
{
 
	User u1={"sxy",17856491475,2367221250};



	return 0;
}