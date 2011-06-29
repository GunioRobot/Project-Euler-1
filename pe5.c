#include<stdio.h>
int main(){
unsigned long i;
for (i = 100; i<1000000000; i++){
	if(i%2 ==0 && i%6 == 0 && i%3 ==0 && i%5 ==0 &&i%15 ==0 && i%7 == 0 && i%11 ==0 && i%13 ==0 &&i%16 ==0 && i%17 == 0&& i%18 == 0 && i%19 ==0 && i%20 == 0){
		printf("%ld\n", i);
		break;}}
return 0;}
