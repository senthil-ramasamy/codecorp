#include<stdio.h>
#include<string.h>
int findnext(int *arr, int j)
{
	while(arr[j] == 1)
	{
		if(j<100)
			j++;
		else
			j = 1;
	}		
	return j;
}
int main() {
	int arr[101];
	memset(arr,0,sizeof(arr));
	int remperson = 100,i,j;
	for(i=1; remperson!=1; remperson--)
	{
		j = findnext(arr,i+1);
		//printf("%d is killed\n",j);
		arr[j]=1;
		i=findnext(arr,j+1);
		//printf("%d has next knife\n",i);
		//printf("\n rem person %d\n", remperson);
	}
	//printf("\n rem person %d", remperson);
	for(i=1;i<=100;i++)
	{
		if(arr[i]==0)
			printf("\n%d",i);
	}
	return 0;
}
