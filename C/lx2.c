#include <stdio.h> 
#include <math.h> 

int main() { 
printf("【欢迎】这是一个判断质数的程序<请输入一个不小于1的正整数。\n"); 
int num; 
scanf("%d", &num); 
if (num == 0 || num == 1) { 
printf("【ERROR】不要逗我!\n"); 
return 0; 
} 
int is_prime = 1; 
int i; 
for (i = 2; i <= sqrt(num); i++) { 
if (num % i == 0) { 
is_prime = 0; 
break; 
} 
} 
if (is_prime) { 
printf("这是一个质数\n"); 
} else { 
printf("这是一个合数\n"); 
} 
return 0;}