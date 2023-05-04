#include<stdio.h>

typedef enum Status
{
	Unused = 0,				//闲置
	Borrowed = 1,				//被借走
	Diverted = 2,				//被转走
	Others = 3					//其他
}Status;
Status stus;


//图书属性
typedef struct Book
{
	const char* book_name,SN,auther;					//书名、序列号、作者
	unsigned int year;												//发行年份
	unsigned short NO;											//NO作为索引值(1~256)
	 Status stus;														//状态(闲置、被借、转走、其他)
}Book;

//输出book的stus属性
const char* Show_Status(const Book* book)
{
	Status stus = (*book).stus;
		switch (stus)
		{
		case 0:
			return "Unused"; break;
		case 1:
			return "Borrowed"; break;
		case 2:
			return "Diverted"; break;
		default:
			return "Other"; break;
		}
}


int main()
{
	Book book1 = { "C语言程序设计",2018,1,Unused };
	printf(Show_Status(&book1));


	return 0;
}