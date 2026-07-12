#include <stdio.h>

int main()
{
int i;
int clas[10];
int pass=0,faild=0;
int max,min;
 

for(i=0;i<10;i++){
printf("degree of student: %d ",i);
scanf("%d",&clas[i]);

if(i==0){
     max=clas[0];
     min=clas[0];
}



if(clas[i]>=50)
 pass++;
else if(clas[i]<50)
     faild++;


   
   if(clas[i]>max) 
   max=clas[i];
   
   if(clas[i]<min)
   min=clas[i];



}
  printf ("number pass students=%d\n",pass);
  printf("number faild students=%d\n",faild);   
  
 printf("highest degree=%d\n",max);
 
  printf ("lowest degree=%d",min);




    
    return 0;
   

}











