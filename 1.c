///���������ַ����е�K���ַ�
//����
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="chaojixiaowu";
	int n=0;
	int i,tmp=0;
	int j;
	int sz=strlen(arr);
	printf("��������ת�����ַ�");
	scanf("%d",&n);
	while(n>sz)
	{
		printf("�޷���ת��˶��ַ�������������");
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


//������ת��
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

//��дһ������ �ж��Ƿ񾭹�����
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
		printf("δ����ת");
	else
		printf("��ת��%d���ַ�",ret);
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

//ƴ�Ӻ��� strcat ���ǲ����������Լ�׷�� \0�ᱻȡ�� 
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
//ƴ�Ӻ��� strncat	strncat(arr,arr,sz)
//strstr���Ӵ� ����������ָ�� û���Ӵ�����NULL
//���Ӵ����ص�ַ


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
		printf("δ����ת");
	else
		printf("��ת���ַ�",ret);
	return 0;
}