#include <stdio.h> 

#include <stdlib.h>

struct servitor

{

   char m[8],q[12];

   int g,w,h;

};

void calc(struct servitor *);

int main(void)

{

   struct servitor emp; 


   printf("                 Servitor手機結構體                 \n");

   printf("-------------------------------------------------\n"); 

   printf("請輸入編號,姓名,時薪,工作時數: ");

   scanf(" %s %s %d %d", emp.m, emp.q, &emp.g, &emp.w);

   calc(&emp);

   printf("月收入: %d\n", emp.h);

   system("pause"); 

   return 0;

}



void calc(struct servitor *p)

{

    p->h=p->g*p->w;

}


