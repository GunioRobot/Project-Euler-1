#include<stdio.h>
int main(){
unsigned int i;
unsigned long sum;
sum = 0;
for (i=1; i<1000; i++){
	if (i%3 == 0 || i%5 == 0){
		sum = sum + i;}}
printf("%ld\n", sum);
return 0;}
