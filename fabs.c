#include<stdio.h>
#include<math.h>
int main()
{
    float u,v,c,m;
    printf("Enter the value of 3 variables to be calculate:");
    scanf("%f %f %f",&u,&v,&c);
    m=(v-u)*c;
    printf("%.2f",fabs(m));
    return 0;
}

