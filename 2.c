#include<reg52.h>
#define uint unsigned int 		//�궨��(���ӷֺ�)
#define uchar unsigned char 	//�궨�壨���ӷֺţ�
sbit D1=P1^0;
void delay();	//����������

void main()
{
	while(1)
	{
		D1=0;
		delay();		//������ʱ����
		D1=1;
		delay();		//������ʱ����
	}

}

void delay()		//��ʱ�ӳ���
{
	uint x,y;		//�ֲ���������һ���Ӻ����е��õı�����
	for(x=200;x>0;x--)
		for(y=400;y>0;y--);
		

}
