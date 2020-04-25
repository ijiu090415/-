#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int a,b,sum,average;
    a = 0;
    b = 0;
    sum = 0;
    while(a<100){
        scanf("%d",&a);
        b++;
        sum+=a;
    }
    printf("%d %f",sum,(float)sum/b);

    int a=0,b=0;
    while(1){
        scanf("%d",&a);
        if(a%3==0){
            printf("%d",a/3);
        }
        if(a==-1)
            break;
    }

    int i=0;
    char a;
    scanf("%c",&a);
    for (i;i<20;i++){
        printf("%c",a);
    }

    int a=0,b=0,c=0,sum=0;
    scanf("%d",&a);
    for (c=0;c<a;c++){
        scanf("%d",&b);
        sum+=b;
    }
    printf("%.1f\n",(float)sum/a);
    if(sum/a>=80){
        printf("pass");
    }
    else{
        printf("fail");
    }

    int a=2,b=3,c=4,d=5,e=6,i=0;
    for(i;i<4;i++){
        printf("%d ",a);
        a++;
    }
    printf("\n");
    i=0;
    for(i;i<4;i++){
        printf("%d ",b);
        b++;
    }
    printf("\n");
    i=0;
    for(i;i<4;i++){
        printf("%d ",c);
        c++;
    }
    printf("\n");
    i=0;
    for(i;i<4;i++){
        printf("%d ",d);
        d++;
    }
    printf("\n");
    i=0;
    for(i;i<4;i++){
        printf("%d ",e);
        e++;
    }
    printf("\n");
    i=0;

    int a=0,i=0,b=1,c=0;
    scanf("%d",&a);
    for(i;i<a;i++){
        for(c=0;c<b;c++){
            printf("*");
        }
        printf("\n");
        b++;
    }
    int a=0,i=0,b=1,c=0,e=0;
    scanf("%d",&a);
    int d=1;
    for(i;i<a;i++){
        for(e=0;e<a-d;e++){
            printf(" ");
        }
        for(c=0;c<b;c++){
            printf("*");
        }
        printf("\n");
        b++;
        d++;
    }*/
    int a=0,i=0,c=0,e=0;
    scanf("%d",&a);
    int d=0,f=a;
    for(i;i<a;i++){
        for(e=0;e<d;e++){
            printf(" ");
        }
        for(c=0;c<f;c++){
            printf("*");
        }
        printf("\n");
        d++;
        f--;
    }
}
