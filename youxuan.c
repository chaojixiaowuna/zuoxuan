//��һ�������Ԫ��������תk���ַ�
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
//	printf("��������Ҫ�ƶ������֣�");
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
//ʱ�临�Ӷ�Ϊ0��N�� �ռ临�Ӷ�0��1��


//�������
//#include<stdio.h>
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int n;
//	int i,j;
//	int tmp=0;
//	printf("��������Ҫ�ƶ��������֣�");
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
//ʱ�临�Ӷ�Ϊ0��N*k)  �ռ临�Ӷ�Ϊ0��1��

//��ʱ�任�ռ�
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
//ʱ�临�Ӷ�0��N�� �ռ临�Ӷ�0��N��