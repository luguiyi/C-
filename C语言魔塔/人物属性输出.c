#include "peo.c" 
//人物输出函数 
void people_put(char map[SIZEX][SIZEY],struct people peo[])	//这里定义的map为形参
{
	int number;
	int color;
		for(number=1;number<5;number++)							//结构体数组的输出 
			{
				setcolor(11,0);printf("\t\t\t名字: ");
				if(number==1)
				{color=1;}
				if(number==2)
				{color=2;}
				if(number==3)
				{color=3;}
				if(number==4)
				{color=4;}
				 
				switch(color)
				{
					case 1:setcolor(12,0);break;
				 	case 2:setcolor(9,0);break;//王 
					case 3:setcolor(4,0);break;//虎 
					case 4:setcolor(11,0);break;//象 
					default:setcolor(10,0);		//其他
				}
				
				printf("%s",peo[number].name);
		 		setcolor(10,0);printf("\tHP:  ");setcolor(11,0);printf("%d",peo[number].hp);
		 		setcolor(10,0);printf("\t\t攻击力: ");setcolor(11,0);printf("%d\n",peo[number].gj);

			}
		setcolor(13,0);
		printf("\t\t\t加攻击：▲");
		setcolor(10,0);
		printf("\t加生命值：◆\n");		
}

