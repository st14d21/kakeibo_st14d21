#include<stdio.h>
#include"sum.h"
int main(void){
int payments[5]={1,1,2,3,3};
 if(sum(payments)==10){
   printf("成功\n");
 }else{
   printf("失敗\n");
 }
return 0;
}
