#include<string.h>

//用户属性
typedef struct User
{
	const char* name;								//用户名
	unsigned int accout,password;			//账号+密码
	unsigned int old_password;				//旧密码(用于修改密码)
	unsigned short UID;							//用户UID{1~256}(作为索引)
}User;





int main()
{
 
	User u1={"sxy",17856491475,2367221250};



	return 0;
}