// 时间：2022.04.04 15点46分

//第一种写法
// #include <stdio.h>
// #include<string.h>
// #include<stdlib.h>
// char delete(char *str,char target);
// int main(){
// 	char a[100000];
// 	char b[100000];
// 	gets(a);
// 	gets(b);
// 	int len1=strlen(a);
// 	int len2=strlen(b);
// 	for(int i=0;i<len2;i++){
// 		delete(a,b[i]);
// 	}
// 	printf("%s\n",a);
// 	return 0;
// }
// char delete(char *str,char target){
// 	int i,j=0;
// 	for(i=0;str[i]!='\0';i++){
// 		if(str[i]!=target){
// 			str[j++]=str[i];
// 		}
// 	}
// 	str[j]='\0';
// 	return str;
// }

#include<stdio.h>
#include<string.h>
int main(){
	char a[100000],b[100000];
	gets(a);
	gets(b);
    //遍历字符串a，然后在字符串b中查找a的每一个字符
    //如果查到则不输出，没查到则进行输出
    //学习大佬写法hhh
	for(int i=0;i<strlen(a);i++)
	{
		if(strchr(b,a[i]))//字符串查找函数
			continue;
		else 
			printf("%c",a[i]);
	}
	return 0;
}

