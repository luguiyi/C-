#include<stdio.h> 
#include<string.h> 
int main() 
{ 
	char a[2];
	int i;
	for(i=0;1;i++)
		{	
			
			printf("\n\n\nע�⣺�˳���ֻ���жϵ�һ������ĺ��֣�����ĺ����޷��жϣ�\n");
			printf("������ɻ�ȡC�����к��ֵı���\n");
			printf("����������Ҫת���ĺ��֣�\n");
			scanf("%s",&a);
			//a[0]=-95;a[1]=-18;
			//strcpy(a,"��");
			//printf("�����ַ�Ϊ2���ַ���a[0],a[1]\n");
			//printf("��һ��ʹ��ʱ��Ҫ��(unsigned char)ת��\n\n");
			printf("a[0]��10����=  %d   a[1]��10����=  %d \n",a[0],a[1]); 
			//printf("%s\n",a); 
			//printf("(unsigned char)a[0]��10����=  %d   (unsigned char)a[1]��10����=  %d \n",(unsigned char)a[0],(unsigned char)a[1]);
			//printf("a[0]��16����=  %X   a[1]��16����=  %X \n",(unsigned char)a[0],(unsigned char)a[1]);  
		}
	system("pause");
	return 0;
} 
//strcpy(a,"��"); ���� 
//a[0]=185;a[1]=214;
