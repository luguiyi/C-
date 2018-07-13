#include<stdio.h>
#include<windows.h> 
//颜色函数 ,用法：（字体颜色，背景颜色） 
void setcolor(unsigned short ForeColor,unsigned short BackGroundColor)
{	
	HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,(ForeColor%16)|(BackGroundColor%16*16));
}

main()
{	int i,x;
	
	while(1)
	{
		printf("1:看字体颜色。 2:看背景颜色。\n");
		scanf("%d",&x);
		
		switch(x)
		{
			case 1:
				system("cls");
				for(i=0;i<17;i++)
				{
					setcolor(i,0);
					printf("1:看字体颜色。 2:看背景颜色。\n");
					//printf("0123456789\n"); 
				};break;
			
			case 2:
				system("cls");
				for(i=0;i<17;i++)
				{
					setcolor(0,i);
					printf("1:看字体颜色。 2:看背景颜色。\n");
					//printf("0123456789\n"); 
				};break;
		}
	
	}
	
	
	system("pause");
	
}
