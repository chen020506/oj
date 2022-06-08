//  时间：2022.06.08 15点52分
// 自己写只能得15分，太fw了
//原文链接：https://blog.csdn.net/weixin_61096287/article/details/124112923

#include<iostream>
#include<string>
using namespace std;
string a,b;
int main()
{
	int n;
	cin>>n;
	getchar();
	while(n--){
		getline(cin,a);
		int l=a.length();
		cout<<a<<endl;
		b="";
//删除句首空格
		int i=0;
		while(i<l&&a[i]==' ') a.erase(i,1);
		l=a.length();
//大写→小写
		while(i<l){
			if(a[i]>='A'&&a[i]<='Z'&&a[i]!='I') a[i]+=32;
			if(a[i]=='?') a[i]='!';
			i++;
		}
//句中空格第一次处理
		i=0;
		while(i<l){
			if(a[i]==' '){
				if(!(a[i+1]>='0'&&a[i+1]<='9')&&a[i+1]!='I'&&(a[i+1]<'a'||a[i+1]>'z')) a.erase(i,1);//删除标点前的空格
				while(a[i+1]==' ') a.erase(i+1,1);//删除多余的空格
			}
			i++;
		}
//句末空格
		i=a.length()-1;
		while(a[i]==' '&&i){
			a.erase(i,1);
			i--;
		}
//句中空格第二次处理
		i=0;
		l=a.length();
		while(i<l){
			if(a[i]==' '){
				if(((a[i-1]>='0'&&a[i-1]<='9')||a[i-1]=='I'||a[i-1]>='a'&&a[i-1]<='z')&&(!(a[i+1]>='0'&&a[i+1]<='9')&&a[i+1]!='I'&&(a[i+1]<'a'||a[i+1]>'z'))) 
					a.erase(i,1);//删除数字（单词）与标点之间的空格
			}
			i++;
		}
//测试 
//		cout<<endl<<a<<"*"<<endl<<endl;
		i=0;
		l=a.length();
		while(i<l){
			if((!(a[i-1]>='0'&&a[i-1]<='9')&&a[i-1]!='I'&&(a[i-1]<'a'||a[i-1]>'z'))){
//判断a[i-1]是否独立，下面的同理
				if(a[i]=='c'&&a[i+1]=='a'&&a[i+2]=='n'&&a[i+3]==' '&&a[i+4]=='y'&&a[i+5]=='o'&&a[i+6]=='u'&&(!(a[i+7]>='0'&&a[i+7]<='9')&&a[i+7]!='I'&&(a[i+7]<'a'||a[i+7]>'z'))){
					b+="I can";
					i+=7;
				}
				else if(a[i]=='c'&&a[i+1]=='o'&&a[i+2]=='u'&&a[i+3]=='l'&&a[i+4]=='d'&&a[i+5]==' '&&a[i+6]=='y'&&a[i+7]=='o'&&a[i+8]=='u'&&a[i+9]!='I'&&(!(a[i+9]>='0'&&a[i+9]<='9')&&(a[i+9]<'a'||a[i+9]>'z'))){
					b+="I could";
					i+=9;
				}
				else if(a[i]=='I'&&(!(a[i+1]>='0'&&a[i+1]<='9')&&a[i+1]!='I'&&a[i+1]!='I'&&(a[i+1]<'a'||a[i+1]>'z'))){
					b+="you";
					i++;
				}
				else if(a[i]=='m'&&a[i+1]=='e'&&(!(a[i+2]>='0'&&a[i+2]<='9')&&a[i+2]!='I'&&(a[i+2]<'a'||a[i+2]>'z'))){
					b+="you";
					i+=2;
				}
//其他情况
				else{
					b+=a[i];
					i++;
				}
			}
			else{
				b+=a[i];
				i++;
			}
		}
		cout<<"AI: "<<b<<endl;
//测试 
//		cout<<"AI: *"<<b<<"*"<<endl;
	}
	return 0;
}