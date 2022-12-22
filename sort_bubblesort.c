
#include<stdio.h>
void swar_els(int *one,int* two){
  int temp=*one;
  *one=*two;
  *two=temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swar_els(&arr[j], &arr[j + 1]);
}
void prinarr(int arr[],int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
}
int main(){
  int arr[]={3,4,5,1,2,8,6,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  bubbleSort(arr,n);
  prinarr(arr,n);
  return 0;
}

 