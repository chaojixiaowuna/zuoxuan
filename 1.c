///可以左旋字符串中的K个字符
//例如
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="chaojixiaowu";
	int n=0;
	int i,tmp=0;
	int j;
	int sz=strlen(arr);
	printf("请输入旋转几个字符");
	scanf("%d",&n);
	while(n>sz)
	{
		printf("无法旋转如此多字符，请重新输入");
		scanf("%d",&n);
	}
	for(j=0;j<n;j++)
	{

	for(i=0;i<sz-1;i++)
	{
		if(i==0)
		{
		tmp=arr[0];
		}
		arr[i]=arr[i+1];
		if(i==sz-2)
		{
			arr[i+1]=tmp;
		}
	}
	}
	printf("%s",arr);
	return 0;
}


//三步翻转法
//abcdef
//ab cdef   -ba  fedc
//cdefab

#include<stdio.h>
#include<string.h>
void reverse(char* left,char* right)
{
	char tmp;
	while(left<right)
	{
	tmp=*left;
	*left=*right;
	*right=tmp;
	left++;
	right--;
	}
}

void leftmove(char arr[],int sz)
{
	int a=strlen(arr);
	reverse(arr,arr+sz-1);
	reverse(arr+sz,arr+a-1);
	reverse(arr,arr+a-1);
}
int main()
{
	char arr[]="chaojixiaowu";
	leftmove(arr,1);
	printf("%s",arr);
	return 0;
}

//编写一个函数 判断是否经过左旋
#include<stdio.h>
#include<string.h>
void reverse(char* left,char* right)
{
	char tmp;
	while(left<right)
	{
		tmp=*left;
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}
int judge(char* arr1,char* arr2)
{
	int i=0;
	int sz=strlen(arr1);
	while(strcmp(arr1,arr2)!=0&&i<=sz)
	{
		reverse(arr1,arr1);
		reverse(arr1+1,arr1+sz-1);
		reverse(arr1,arr1+sz-1);
		i++;
	}
	if(i<=sz)
		return i;
	else return 0;
}
int main()
{
	char arr1[]="chaojixiaowu";
	char arr2[]="jixiaowuchao";
	int ret=0;
	ret=judge(arr1,arr2);
	if(ret==0)
		printf("未经旋转");
	else
		printf("旋转了%d个字符",ret);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[]="chaojixiaowu";
	char arr2[]="chaojixiaowu";
	printf("%d",strcmp(arr1,arr2));
	return 0;
}

//拼接函数 strcat 但是不能用来给自己追加 \0会被取代 
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[30]="chaoji";
	char arr1[]="xioawu";
	strcat(arr,arr1);
	printf("%s",arr);
	return 0;
}
//拼接函数 strncat	strncat(arr,arr,sz)
//strstr找子串 返回类型是指针 没有子串返回NULL
//有子串返回地址


#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[30]="chaojixiaowu";
	char arr2[]="jixiaowuchao";
	char* ret;
	int sz=strlen(arr1);
	strncat(arr1,arr1,sz);
	
	ret=strstr(arr1,arr2);
	if(ret==NULL)
		printf("未经旋转");
	else
		printf("旋转了字符",ret);
	return 0;
}