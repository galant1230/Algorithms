#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, num,j=0;
	scanf("%d",&num);
	printf("%d=",num);
	
	while(num>0)
	{
		for(i=2;i<=num;i++)
		{
			while(num%i==0)         //��num�i����ѽ�]�ơA�������@�ӳ̤p�����i
			{                       //�p�Gnum>i�A��num��Qi�㰣�A�h���L�Xi���ȡA�å�num���Hi���ӡA�@���s�������num�A���ư���
				num=num/i;
				j++;                //�ΨӧP�_�i��X�����B�J 
			}                       
			if(j>1&&num!=1)
				printf("%d^%d*",i,j);  //�Y�O���Ʀ��ʧ@�@���H�W�A�B�̫ᰣ�����G����1 �A�ڭ̯�P�_�O����ƻP�ѤU���Ӭۭ� 
			else if(j==1&&num!=1)
				printf("%d*",i);
			else if(j==1&&num==1)      //�Y�O��ƫh�����L�X�ۤv 
				printf("%d",i);
			else if(j>1&&num==1)       //�Y�O���Ʀ��ʧ@�@���H�W�A�B�̫ᰣ�����G��1 �A�ڭ̯�P�_�O����� 
				printf("%d^%d",i,j);
			j=0;
		}
		break;
	}
	printf("\n");
	return 0;
}
