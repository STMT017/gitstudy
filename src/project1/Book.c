#include<stdio.h>

typedef enum Status
{
	Unused = 0,				//����
	Borrowed = 1,				//������
	Diverted = 2,				//��ת��
	Others = 3					//����
}Status;
Status stus;


//ͼ������
typedef struct Book
{
	const char* book_name,SN,auther;					//���������кš�����
	unsigned int year;												//�������
	unsigned short NO;											//NO��Ϊ����ֵ(1~256)
	 Status stus;														//״̬(���á����衢ת�ߡ�����)
}Book;

//���book��stus����
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
	Book book1 = { "C���Գ������",2018,1,Unused };
	printf(Show_Status(&book1));


	return 0;
}