#include <stdio.h> 
#include <math.h>
int main()
{double h;
double a;
double y;
h=0.001;
a=1;
a=exp(a);
printf("%f",a);
double z=a-y;
int n=0;
double t=0;
double w;
double m;
m=25;
m=exp(1)*m;
printf("%f\n",m);
while(z>0.001*h&&w<m){y=a-a*h;
w=t+h;
t=w;
z=a-y;
a=y;
n++;
printf("x=%f      f(x%d)=%f      f(x%d)-f(x%d)=%f\n",w,n,y,n,n-1,z);
}

printf("zuizhongdingtai=%f xquzhi%f",y,w);
return 0;
}

