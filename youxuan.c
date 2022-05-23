//将一个数组的元素向右旋转k个字符
//#include<stdio.h>
//void reverse(int* arr,int* arr1)
//{
//	int tmp=0;
//	while(arr<arr1)
//	{
//		tmp=*arr;
//		*arr=*arr1;
//		*arr1=tmp;
//		arr++;
//		arr1--;
//	}
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int n,i;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	printf("请输入需要移动的数字：");
//	scanf("%d",&n);
//if(n>=sz)
//k%=sz;
//	reverse(arr,arr+n-1);
//	reverse(arr+n,arr+sz-1);
//	reverse(arr,arr+sz-1);
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//时间复杂度为0（N） 空间复杂度0（1）


//暴力求解
//#include<stdio.h>
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int n;
//	int i,j;
//	int tmp=0;
//	printf("请输入需要移动几个数字：");
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		tmp=arr[0];
//		for(j=0;j<9;j++)
//		{
//			
//			arr[j]=arr[j+1];
//			
//		}
//		arr[9]=tmp;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}
//时间复杂度为0（N*k)  空间复杂度为0（1）

//以时间换空间
//#include<stdio.h>
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int abb[10]={0};
//	int n,i,j=0;
//	scanf("%d",&n);
//	for(i=0;i<10-n;i++)
//	{
//		abb[i]=arr[i+n];
//	}
//	for(i=10-n;i<10;i++)
//	{
//		abb[i]=arr[j];
//		j++;
//	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d",abb[i]);
//	}
//	return 0;
//}
//时间复杂度0（N） 空间复杂度0（N）