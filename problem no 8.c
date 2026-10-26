#include <stdio.h>
int main (){
int n,rem,sum = 0;
scanf("%d", &n);
if ( n<0)
    n= -n;
while (n!= 0){rem= n%10;
sum=sum+rem;
n=n/10;
}
printf ("sum=%d", sum);

return 0;
}
