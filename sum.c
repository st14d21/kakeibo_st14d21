#include<stdio.h>
#include"sum.h"
int sum(int payments[]){
int i,a=0;
 for(i=0;i<5;i++){
    a=a+payments[i];
 }
return a;
}
