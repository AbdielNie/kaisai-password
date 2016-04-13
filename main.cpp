#include<stdio.h>  
//Made by AbdielNie

#include<string.h> 
#define m 20
int main(void)
{
	int c,i,k;
	char a[m];
	printf("1.加密 2.解密 3.退出\n请选择：");      //选择菜单
	scanf("%d",&c);                             //选择加密或解密
	fflush(stdin);                            //为下面get()语句清空缓存
	switch(c)                                   //switch语句执行选择
	{
	case 1:                                         //选择加密后进入并执行此语句
        printf("请输入明文："); 
         gets(a);                                 //输入要进行加密的明文
		printf("请输入密钥：");
		 scanf("%d",&k);                        //输入密钥
         for(i=0;i<strlen(a);i++)                //依次取出明文字符进行加密
		 {
			 if('a'<=a[i] && a[i]<='z')
			 {
               a[i]=('a'+(a[i]-'a'+(k%26)+26)%26);     //实现明文字符的移动，实现加密
			 }
			 else if('A'<=a[i] && a[i]<='Z')
			 {
				 a[i]=('A'+(a[i]-'A'+(k%26)+26)%26);
			 }
		 }
		 printf("密文为：");
		 puts(a);                                 //输出加密后的密文
	break;
	case 2:                                         //选择解密后进入并执行此语句
        printf("请输入密文：");              
         gets(a);                                  //输入要解密的密文
		printf("请输入密钥：");
		 scanf("%d",&k);                             //输入密钥

         for(i=0;i<strlen(a);i++)                  //依次取出密文中的所有字符
		 {
			 if('a'<=a[i] && a[i]<='z')            //判断条件为小写字母
			 {
               a[i]='a'+(a[i]-'a'-(k%26)+26)%26;    //实现密文字符的移动，实现解密
			 }
			 else if('A'<=a[i] && a[i]<='Z')         //判断条件为大写字母
			 {
				 a[i]=('A'+(a[i]-'A'-(k%26)+26)%26);  //实现密文字符的移动，实现解密 
			 }
		 }
		 printf("明文为：");       
		 puts(a);                                  //输出解密后的明文
	break;
	case 3:                                          //选择退出
		printf("您已经退出系统!\n");              
	break;
	default:
		printf("error：请输入1-3的整数\n");        //错误提示
	}9
}
