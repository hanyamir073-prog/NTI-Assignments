#include <stdio.h>
int main ()
{
int arr [7];
int i,j;
int temp;
for (i=0;i<7;i++){	
printf ("original array is %d:",i);
scanf("%d",&arr[i]);

for(j=0;j<7;j++){
if(arr[j]>arr[j+1]){
    temp=arr[j];
    arr[j]=arr[j+1];
  arr[j+1]=temp;
}


}



}

printf("sorted array is %d:");
for (i=0;i<7;i++){
printf("%d\n",arr[i]);
}

return 0;

}