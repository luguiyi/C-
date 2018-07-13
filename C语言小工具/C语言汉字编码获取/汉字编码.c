#include<stdio.h> 
#include<string.h> 
int main() 
{ 
	char a[2];
	int i;
	for(i=0;1;i++)
		{	
			
			printf("\n\n\n注意：此程序只能判断第一个输入的汉字，后面的汉字无法判断！\n");
			printf("本程序可获取C语言中汉字的编码\n");
			printf("请输入你想要转换的汉字！\n");
			scanf("%s",&a);
			//a[0]=-95;a[1]=-18;
			//strcpy(a,"◆");
			//printf("将汉字分为2个字符啊a[0],a[1]\n");
			//printf("后一个使用时需要用(unsigned char)转换\n\n");
			printf("a[0]的10进制=  %d   a[1]的10进制=  %d \n",a[0],a[1]); 
			//printf("%s\n",a); 
			//printf("(unsigned char)a[0]的10进制=  %d   (unsigned char)a[1]的10进制=  %d \n",(unsigned char)a[0],(unsigned char)a[1]);
			//printf("a[0]的16进制=  %X   a[1]的16进制=  %X \n",(unsigned char)a[0],(unsigned char)a[1]);  
		}
	system("pause");
	return 0;
} 
//strcpy(a,"怪"); 例子 
//a[0]=185;a[1]=214;
