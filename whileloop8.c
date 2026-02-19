#include<stdio.h>
int main(){
int n;
int fuel;
scanf("%d%d",&fuel,&n);
int count=0;
int i=0;
int fueltrip;
while(i<n){
scanf("%d",&fueltrip);
if(fuel>=fueltrip){
fuel=fuel-fueltrip;
count++;
}
else{
break;
}
i++;
}

printf("completed trips: %d",count);
printf("remaining fuel:%d",fuel);
return 0;
}