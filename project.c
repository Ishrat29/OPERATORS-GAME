#include<string.h>
#include<stdio.h>

void add(int a,int b)
{
    printf("%d",a+b);
}

void sub(int a,int b)
{
    printf("%d",a-b);
}


void divide(int x,int y)
{
    printf("%d",x/y);
}

void mod(int a,int b)
{
    printf("%d",a%b);
}
void mul(int a,int b)
{
    printf("%d",a*b);
}


int GCD(int x,int y)
{
    if(y==0)
    {
        printf("%d\n",x);
        return x;
    }
    else
        return GCD(y,x%y);
}

int gcd(int x,int y)
{

    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}
void LCM(int x,int y)
{
    printf("%d\n",(x/gcd(x,y))*y);
}

int main()
{
    char s[100];
    int a,b,r;
    scanf("%s %d %d",s,&a,&b);

    if(strcmp(s,"ADD")==0)
        add(a,b);


    if(strcmp(s,"SUB")==0)
        sub(a,b);


    if(strcmp(s,"DIV")==0)
        divide(a,b);


    if(strcmp(s,"MOD")==0)
        mod(a,b);

      if(strcmp(s,"MUL")==0)
        mul(a,b);

    if(strcmp(s,"GCD")==0)
        GCD(a,b);

    if(strcmp(s,"LCM")==0)
        LCM(a,b);

    return 0;
}
