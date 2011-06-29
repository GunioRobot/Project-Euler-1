#include<stdio.h>
unsigned long fib(unsigned long n){
if (n == 0){return 0;}
if (n == 1){return 1;}
return fib(n-1)+fib(n-2);}
int main(){
unsigned long i,f, sum;
sum = 0;
i = 0;
f = 0;
f = fib(i);
while(f < 4000000){
	i = i + 1;
	f = fib(i);
	if (f % 2 == 0){
		sum = sum + f;}}
printf("%ld\n", sum);
return 0;}
