#include<stdio.h>
#include<string.h>
#define SIZE 10
main()
{	char a[SIZE][SIZE];	//����һ��3*3���ַ�����
	int i=0,j=0,x,y,n=0;		//����2������ 
	for(i=0;i<SIZE;i++)		//��2��forѭ�������鸳ֵ 
		{for(j=0;j<SIZE;j++)
			a[i][j]='+';
		}
	a[0][0]='0';
	for(i=0;i<SIZE;i++)
		a[i][0]=i+48;
	
	for(j=0;j<SIZE;j++)
		a[0][j]=j+48;	
	
	printf("����һ��5������Ϸ��\n5��������һ�߼��ɻ�ʤ��\n");
	printf("���1������Ϊ��#�������2������Ϊ��%%����\n"); 
			
	for(i=0;i<SIZE;i++)		//��2��forѭ����� 
		{for(j=0;j<SIZE;j++)
			{
			 printf("%3c",a[i][j]);
			}
		printf("\n");
		}
		
p1x :	printf("���1������һ�������ӣ�\n");//�������е����� 
	scanf("%d",&x);
	if(x>=SIZE||x<=0)				//ȷ����������������� 
		{printf("����������������⣡\n"); 
		goto p1x;
		} 
p1y :	printf("���1������һ�������ӣ�\n");
	scanf("%d",&y);
	if(y>=SIZE||y<=0)
		{printf("����������������⣡\n");
		goto p1y;
		} 
	i=x;j=y;
	a[i][j]='#';
	
		
	system("pause");system("cls");
	printf("���1������Ϊ��#�������2������Ϊ��%%����\n"); 
	for(i=0;i<SIZE;i++)		//��2��forѭ����� 
		{for(j=0;j<SIZE;j++)
			{
			 printf("%3c",a[i][j]);
			}
		printf("\n");
		}
	
	while(n<1000)
	{
	for(i=0;i<SIZE;i++)	                                //����ǰ���P1�Ƿ�ʤ�� 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='#')				//��a[i][j]='#'ʱ 
				if(a[i-1][j-1]=='#')	//��a[i][j]������������Ϊ'#'ʱ 
					if(a[i+1][j+1]=='#')
						if(a[i+2][j+2]=='#')
							if(a[i-2][j-2]=='#')
							{
							printf("���1Ӯ��\n");goto win;
							}
			}
		}
		
	for(i=0;i<SIZE;i++)	                                //����ǰ���P1�Ƿ�ʤ�� 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='#')				//��a[i][j]='#'ʱ 
				if(a[i-1][j]=='#')	//��a[i][j]����������Ϊ'#'ʱ 
					if(a[i+1][j]=='#')
						if(a[i+2][j]=='#')
							if(a[i-2][j]=='#')
							{
							printf("���1Ӯ��\n");goto win;
							}
			}
		}
		
	for(i=0;i<SIZE;i++)	                                //����ǰ���P1�Ƿ�ʤ�� 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='#')				//��a[i][j]='#'ʱ 
				if(a[i-1][j+1]=='#')	//��a[i][j]������������Ϊ'#'ʱ 
					if(a[i+1][j-1]=='#')
						if(a[i+2][j-2]=='#')
							if(a[i-2][j+2]=='#')
							{
							printf("���1Ӯ��\n");goto win;
							}
			}
		}	
	
	for(i=0;i<SIZE;i++)	                                //����ǰ���P1�Ƿ�ʤ�� 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='#')				//��a[i][j]='#'ʱ 
				if(a[i][j-1]=='#')	//��a[i][j]����������Ϊ'#'ʱ 
					if(a[i][j+1]=='#')
						if(a[i][j+2]=='#')
							if(a[i][j-2]=='#')
							{
							printf("���1Ӯ��\n");goto win;
							}
			}
		}
	
loop2 :	printf("���2������һ�������ӣ�\n");        //p2���룬����ǰ�ж��Ƿ�������
	scanf("%d",&x);
	if(x>=SIZE||x<=0)				//ȷ����������������� 
		{printf("����������������⣡\n"); 
		goto loop2;
		} 
p2y :	printf("���2������һ�������ӣ�\n");
	scanf("%d",&y);
	if(y>=SIZE||y<=0)
		{printf("����������������⣡\n");
		goto p2y;
		} 
	i=x;j=y;			
	if(a[i][j]=='+')
		a[i][j]='%';
	else
		{printf("�Ѿ������ӣ����������룡\n");goto loop2;} 
		
	system("pause");		//���� 
	system("cls");
	printf("���1������Ϊ��#�������2������Ϊ��%%����\n"); 
	for(i=0;i<SIZE;i++)		//��2��forѭ����� 
		{for(j=0;j<SIZE;j++)
			{
			 printf("%3c",a[i][j]);
			}
		printf("\n");
		}
		
	for(i=0;i<SIZE;i++)	                                //����ǰ���P2�Ƿ�ʤ�� 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='%')				//��a[i][j]='%'ʱ 
				if(a[i-1][j-1]=='%')	//��a[i][j]������������Ϊ'%'ʱ 
					if(a[i+1][j+1]=='%')
						if(a[i+2][j+2]=='%')
							if(a[i-2][j-2]=='%')
						{
						printf("���2Ӯ��\n");goto win;
						}
			}
		}
		
	for(i=0;i<SIZE;i++)	                                //����ǰ���P2�Ƿ�ʤ�� 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='%')				//��a[i][j]='%'ʱ 
				if(a[i-1][j]=='%')	//��a[i][j]��������Ϊ'%'ʱ 
					if(a[i+1][j]=='%')
						if(a[i+2][j]=='%')
							if(a[i-2][j]=='%')
						{
						printf("���2Ӯ��\n");goto win;
						}
			}
		}
		
	for(i=0;i<SIZE;i++)	                                //����ǰ���P2�Ƿ�ʤ�� 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='%')				//��a[i][j]='%'ʱ 
				if(a[i-1][j+1]=='%')	//��a[i][j]������������Ϊ'%'ʱ 
					if(a[i+1][j-1]=='%')
						if(a[i+2][j-2]=='%')
							if(a[i-2][j+2]=='%')
							{
							printf("���2Ӯ��\n");goto win;
							}
			}
		}	
	
	for(i=0;i<SIZE;i++)	                                //����ǰ���P2�Ƿ�ʤ�� 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='%')				//��a[i][j]='%'ʱ 
				if(a[i][j-1]=='%')	//��a[i][j]��������Ϊ'%'ʱ 
					if(a[i][j+1]=='%')
						if(a[i][j+2]=='%')
							if(a[i][j-2]=='%')
						{
						printf("���2Ӯ��\n");goto win;
						}
			}
		}		
										
loop1 :	printf("���1������һ�������ӣ�\n");		//p1���룬����ǰ�ж��Ƿ�������
	scanf("%d",&x);
	if(x>=SIZE||x<=0)				//ȷ����������������� 
		{printf("����������������⣡\n"); 
		goto loop1;
		} 
p1y2 :	printf("���1������һ�������ӣ�\n");
	scanf("%d",&y);
	if(y>=SIZE||y<=0)
		{printf("����������������⣡\n");
		goto p1y2;
		} 
	i=x;j=y;			
	if(a[i][j]=='+')
		a[i][j]='#';
	else
		{printf("�Ѿ������ӣ����������룡\n");goto loop1;} 
		
	system("pause");		//���� 
	system("cls");
	printf("���1������Ϊ��#�������2������Ϊ��%%����\n"); 
	for(i=0;i<SIZE;i++)		//��2��forѭ����� 
		{for(j=0;j<SIZE;j++)
			{
			 printf("%3c",a[i][j]);
			}
		printf("\n");
		}	
	n++;
	}
	win : printf("you win\n");
	
	system("pause");
}
