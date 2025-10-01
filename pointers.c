#include<stdio.h>
void main(){
    int a=10,b=9,c;
    int*p,*q;
    p=&a;
    q=&b;
    c=*p;
    printf("value of a=%d\n",a);
    printf("value of a=%d\n",*p);
    printf("value of b=%d\n",*q);
    printf("value of b=%d\n",b);
    printf("address of a:%x\n",&a);
    printf("address of a:%x\n",p);
    printf("address of p:%x\n",&p);
    printf("c=%d\n",c);
}
// pointers assigment
void main()
{
    int a=10,b=5;
    int *p,*q;
    p=&a;
    q=&b;
    // *q=p;
    printf("a=%d %d %d",a,*p,*q);
}

// pointers to pointers (double pointer)
void main()
{
    int a = 10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    *p=12;
    **q=17;
    ***r=78;

    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",*(*q));
    printf("a=%d\n",*(*(*r)));
    printf("address of q=%x %x\n",r,&q);
    printf("address of p=%x %x", &p,q);

}

// pointer arithemetic(addition)

void main()
{
    int a[5]={1,4,2,-8,0};
    int *p=&a[0];
    printf("value is: %d\n", *p);
    printf("adress of element is:%u\n",p);
    p = p+2;
    *p = 34;
    printf("value is :%d\n",*p);
    printf("address of element is:%u\n",p);
}
// pointer arithemetic (incement/decrement)
void main()
{
    int a[]= {3,2,67,0,56};
    int *p;
    // p=a;
    p =&a[3];
    // printf("%d %d\n",*p++,*p++);
    // printf("%d %d\n",*++p,*++p);
    printf("%d\n",*p--);
    printf("%d\n",*p);
}
// question
void main ()
{
    char str[] = "Welcome to jenny's lectures ";
    char*ptr = str;
    printf("%c\n",*ptr);
    printf("%c\n",*(ptr++ +1));
    printf("%c\n",*((ptr-- +5) -1) +3);
    printf("%c\n",*(++ptr +10) -32);
    printf("%c%c%c", *ptr, *++ptr,*--ptr);

}

// void pointer 
void main()
{
 int a=5;
 float b=1.50;
 char ch ='e';

 void *p = &a;
 printf("a = %d\n",*(int*)p);

 p = &b;
 printf("b = %f\n",*(float*)p);

 p = &ch;
 printf("ch = %c\n",*(char *)p);
}

// null pointers in c

void main()
{
    int a = 3;
    int *ptr1=NULL;
    //int *ptr2;
    printf("%d\n",ptr1);
    //printf("%d\n",ptr2);
    if(ptr1==NULL)
    {
        printf("this is null pointer");
    }
    else 
    {
        printf("%d\n",ptr1);
    }

}
#include<stdlib.h>
void main()
{
int *ptr=(int*)malloc(sizeof(int));
*ptr=10;
printf("%d\n",*ptr);
free(ptr);
ptr=NULL;
printf("%d\n",*ptr);
}
printf("learning git branching in vs code ! \n");
//i am in feature branch