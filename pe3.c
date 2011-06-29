#include<stdio.h>
int isPrime(unsigned long n){
	int x;
	for (x=2; x <= n/2; x++){
		if (n%x == 0){return 0;}}
	return 1;}
int main(){
unsigned long i,number = 600851475143;
	for(i = 3; i <= number^(1/2); i= i+2){
		if(number % i == 0 && isPrime(i)){
			printf("%ld\n", i);}}
return 0;}
