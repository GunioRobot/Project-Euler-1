#include<stdio.h>
int main(){
unsigned long number, revnum, max;
max = 0;
unsigned int i,x;
for (i=100; i<1000; i++){
	for(x = 100; x < i; x++){
		number = i*x;
		revnum = get_reverse(number);
		if (number == revnum){
			if (max < number){max=number;}}}}
printf("%ld\n", max);
return 0;}

int get_reverse(unsigned long num){
unsigned long rev;
rev = 0;
while(num > 0){
	rev = rev*10 + num % 10;
	num = num / 10;}
return rev;}
