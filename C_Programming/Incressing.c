#include<stdio.h>
int main()
{
	int i,j,num;
	int a[10]={10,20,54,1,6,98,42,30,40,54};
	num=a[1];
	
	for (i=1;i<=10;i++){
		for (j=1+i;j<10;j++){
			if (a[i]<a[j]){
				num=a[i];
				a[i]=a[j];
				a[j]=num;
			}
		}
		printf("%d\n",a[i]);
	}
	return 0;
}
