
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
	    int mid=(left+right)/2;
		if(arr[mid]>k)
		{
		    right=mid-1;
		}
	     else if(arr[mid]<k)
		{
		    left=mid+1;
		}
		 else 
		{
		    printf("找到了，他的下坐标是：%d\n",mid);
			break;
		}

	}
	if(left>right)
	{
	   printf("未找到");
	
	}
}
//#include<stdio.h>
//int main()
//	{
//     int i,j;
//	 int sum;
//	 scanf("%d %d",&i,&j);
//	 sum=i+j;
//	 printf("%d+%d=%d",i,j,sum);
//	}