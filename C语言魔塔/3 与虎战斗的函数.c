#include "peo.c" 
void attacktiger(char map[SIZEX][SIZEY],struct people peo[])
{
	int panduan;
	for(panduan=0;peo[3].hp>0&&peo[0].mark!=0;panduan++)			//peo[0]为人物 peo[3]为虎
	 	{ 
	  		peo[3].hp=peo[3].hp-peo[0].gj;							//人攻击虎 
	 		if(peo[3].hp<0)											//当虎生命值小于0时，令它为0 
	  			{peo[3].hp=0;}
			peo[0].hp=peo[0].hp-peo[3].gj;							//虎攻击人
	  		if(peo[0].hp<=0)										//当人物生命小于0时，输了 
	  			{peo[0].mark=0;}
			map_put(map,peo);											//战斗后输出，每攻击一次，输出地图一次，
						
			if(peo[3].hp!=0)										//战斗过程的信息输出 
				{
				setcolor(8,0);
				printf("\n你受到");
				setcolor(9,0);
				printf(" %d ",peo[3].gj);
				setcolor(8,0);
				printf("点伤害\t\t");
				
			 	printf("你剩余");
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].hp);
			 	setcolor(8,0);
			 	printf("点生命\n");
			 	
			 	printf("%s 受到",peo[3].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[0].gj);
			 	setcolor(8,0);
			 	printf("点伤害\t",peo[3].name,peo[0].gj);
			 	
			 	printf("%s 剩余",peo[3].name);
			 	setcolor(9,0);
			 	printf(" %d ",peo[3].hp);
			 	setcolor(8,0);
			 	printf("点生命\n");
				}
			else
				{
				setcolor(8,0);
				printf("\n你受到");
				setcolor(9,0);
				printf(" %d ",peo[3].gj);
				setcolor(8,0);
				printf("点伤害\t\t");
				setcolor(7,0);printf("%s 死亡\n",peo[3].name);
				}

			system("pause");
			system("cls");
	 	}
	
	strcpy(peo[3].name,"虎");
	peo[3].hp=5;
	peo[3].gj=5;
	peo[3].mark=1;
}
