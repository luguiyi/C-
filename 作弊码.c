#include "peo.c" 
//作弊 
void greed(char map[SIZEX][SIZEY],struct people peo[],int x,int y)
{	
	int command;
	printf("请输入作弊码\n");
	scanf("%d",&command);
	if(command==11111)
		{	
			setcolor(13,0);
			printf("攻击力：%d＞",peo[0].gj);
			peo[0].gj=peo[0].gj+30; 
			printf("%d\n",peo[0].gj);	
		} 
	else if(command==22222)
		{
			setcolor(10,0);
			printf("生命值：%d＞",peo[0].hp);
			peo[0].hp=peo[0].hp+30; 
			printf("%d\n",peo[0].hp);
		}
	else
		{
			printf("您输入的作弊码不正确！\n");
		}
}
