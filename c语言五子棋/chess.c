#include<stdio.h>
#include<string.h>
#define SIZE 10
main()
{	char a[SIZE][SIZE];	//定义一个3*3的字符数组
	int i=0,j=0,x,y,n=0;		//定义2个变量 
	for(i=0;i<SIZE;i++)		//用2个for循环给数组赋值 
		{for(j=0;j<SIZE;j++)
			a[i][j]='+';
		}
	a[0][0]='0';
	for(i=0;i<SIZE;i++)
		a[i][0]=i+48;
	
	for(j=0;j<SIZE;j++)
		a[0][j]=j+48;	
	
	printf("这是一个5子棋游戏！\n5个子连成一线即可获胜！\n");
	printf("玩家1的棋子为“#”，玩家2的棋子为“%%”！\n"); 
			
	for(i=0;i<SIZE;i++)		//用2个for循环输出 
		{for(j=0;j<SIZE;j++)
			{
			 printf("%3c",a[i][j]);
			}
		printf("\n");
		}
		
p1x :	printf("玩家1想在哪一行下棋子？\n");//输入行列的坐标 
	scanf("%d",&x);
	if(x>=SIZE||x<=0)				//确保玩家下子在棋盘上 
		{printf("您输的行数在棋盘外！\n"); 
		goto p1x;
		} 
p1y :	printf("玩家1想在哪一列下棋子？\n");
	scanf("%d",&y);
	if(y>=SIZE||y<=0)
		{printf("您输的列数在棋盘外！\n");
		goto p1y;
		} 
	i=x;j=y;
	a[i][j]='#';
	
		
	system("pause");system("cls");
	printf("玩家1的棋子为“#”，玩家2的棋子为“%%”！\n"); 
	for(i=0;i<SIZE;i++)		//用2个for循环输出 
		{for(j=0;j<SIZE;j++)
			{
			 printf("%3c",a[i][j]);
			}
		printf("\n");
		}
	
	while(n<1000)
	{
	for(i=0;i<SIZE;i++)	                                //输入前检测P1是否胜利 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='#')				//当a[i][j]='#'时 
				if(a[i-1][j-1]=='#')	//当a[i][j]的左上面右下为'#'时 
					if(a[i+1][j+1]=='#')
						if(a[i+2][j+2]=='#')
							if(a[i-2][j-2]=='#')
							{
							printf("玩家1赢了\n");goto win;
							}
			}
		}
		
	for(i=0;i<SIZE;i++)	                                //输入前检测P1是否胜利 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='#')				//当a[i][j]='#'时 
				if(a[i-1][j]=='#')	//当a[i][j]的上面下面为'#'时 
					if(a[i+1][j]=='#')
						if(a[i+2][j]=='#')
							if(a[i-2][j]=='#')
							{
							printf("玩家1赢了\n");goto win;
							}
			}
		}
		
	for(i=0;i<SIZE;i++)	                                //输入前检测P1是否胜利 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='#')				//当a[i][j]='#'时 
				if(a[i-1][j+1]=='#')	//当a[i][j]的右上左下面为'#'时 
					if(a[i+1][j-1]=='#')
						if(a[i+2][j-2]=='#')
							if(a[i-2][j+2]=='#')
							{
							printf("玩家1赢了\n");goto win;
							}
			}
		}	
	
	for(i=0;i<SIZE;i++)	                                //输入前检测P1是否胜利 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='#')				//当a[i][j]='#'时 
				if(a[i][j-1]=='#')	//当a[i][j]的左面右面为'#'时 
					if(a[i][j+1]=='#')
						if(a[i][j+2]=='#')
							if(a[i][j-2]=='#')
							{
							printf("玩家1赢了\n");goto win;
							}
			}
		}
	
loop2 :	printf("玩家2想在哪一行下棋子？\n");        //p2输入，输入前判断是否有棋子
	scanf("%d",&x);
	if(x>=SIZE||x<=0)				//确保玩家下子在棋盘上 
		{printf("您输的行数在棋盘外！\n"); 
		goto loop2;
		} 
p2y :	printf("玩家2想在哪一列下棋子？\n");
	scanf("%d",&y);
	if(y>=SIZE||y<=0)
		{printf("您输的列数在棋盘外！\n");
		goto p2y;
		} 
	i=x;j=y;			
	if(a[i][j]=='+')
		a[i][j]='%';
	else
		{printf("已经有棋子，请重新输入！\n");goto loop2;} 
		
	system("pause");		//清屏 
	system("cls");
	printf("玩家1的棋子为“#”，玩家2的棋子为“%%”！\n"); 
	for(i=0;i<SIZE;i++)		//用2个for循环输出 
		{for(j=0;j<SIZE;j++)
			{
			 printf("%3c",a[i][j]);
			}
		printf("\n");
		}
		
	for(i=0;i<SIZE;i++)	                                //输入前检测P2是否胜利 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='%')				//当a[i][j]='%'时 
				if(a[i-1][j-1]=='%')	//当a[i][j]的左上右下面为'%'时 
					if(a[i+1][j+1]=='%')
						if(a[i+2][j+2]=='%')
							if(a[i-2][j-2]=='%')
						{
						printf("玩家2赢了\n");goto win;
						}
			}
		}
		
	for(i=0;i<SIZE;i++)	                                //输入前检测P2是否胜利 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='%')				//当a[i][j]='%'时 
				if(a[i-1][j]=='%')	//当a[i][j]的上下面为'%'时 
					if(a[i+1][j]=='%')
						if(a[i+2][j]=='%')
							if(a[i-2][j]=='%')
						{
						printf("玩家2赢了\n");goto win;
						}
			}
		}
		
	for(i=0;i<SIZE;i++)	                                //输入前检测P2是否胜利 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='%')				//当a[i][j]='%'时 
				if(a[i-1][j+1]=='%')	//当a[i][j]的右上左下面为'%'时 
					if(a[i+1][j-1]=='%')
						if(a[i+2][j-2]=='%')
							if(a[i-2][j+2]=='%')
							{
							printf("玩家2赢了\n");goto win;
							}
			}
		}	
	
	for(i=0;i<SIZE;i++)	                                //输入前检测P2是否胜利 
		{for(j=0;j<SIZE;j++)
			{if(a[i][j]=='%')				//当a[i][j]='%'时 
				if(a[i][j-1]=='%')	//当a[i][j]的左右面为'%'时 
					if(a[i][j+1]=='%')
						if(a[i][j+2]=='%')
							if(a[i][j-2]=='%')
						{
						printf("玩家2赢了\n");goto win;
						}
			}
		}		
										
loop1 :	printf("玩家1想在哪一行下棋子？\n");		//p1输入，输入前判断是否有棋子
	scanf("%d",&x);
	if(x>=SIZE||x<=0)				//确保玩家下子在棋盘上 
		{printf("您输的行数在棋盘外！\n"); 
		goto loop1;
		} 
p1y2 :	printf("玩家1想在哪一列下棋子？\n");
	scanf("%d",&y);
	if(y>=SIZE||y<=0)
		{printf("您输的列数在棋盘外！\n");
		goto p1y2;
		} 
	i=x;j=y;			
	if(a[i][j]=='+')
		a[i][j]='#';
	else
		{printf("已经有棋子，请重新输入！\n");goto loop1;} 
		
	system("pause");		//清屏 
	system("cls");
	printf("玩家1的棋子为“#”，玩家2的棋子为“%%”！\n"); 
	for(i=0;i<SIZE;i++)		//用2个for循环输出 
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
