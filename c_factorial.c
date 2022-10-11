#include <stdio.h>

int fact(int n){
if (n == 0)
return 1;
return n * fact(n - 1);
}

int main(){
int x = 5;
printf("Factorial of %d is %d", x, fact(x));
return 0;
}
