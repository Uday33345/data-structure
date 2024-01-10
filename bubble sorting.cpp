#include<stdio.h>
void bubble(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void print(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
		printf("\n");
	}
}
int main(){
	int arr[]={46,78,23,21,10,7,34,56,78,98,55};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("\n order of arrays:");
	print(arr,n);
	bubble(arr,n);
	
	printf("\nbubble sorting order is:");
	print(arr,n);
	return 0;
}
