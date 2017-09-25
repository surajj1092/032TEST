#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
struct node{
        int info;
        int *next;
};
int main()
{
        struct node s,*se;
        int a=10;
//      se=(struct node *)malloc(sizeof(struct node));
//      if(!se)
//      {
//              perror("malloc");
//              exit(EXIT_FAILURE);
//      }
        se=&s;
        s.info=10;
        (s.next)=&a;;
        se->info=20;
        *(se->next)=24;
        printf("%d\n",s.info);
        printf("%d\n",*(s.next));
        printf("%d\n",(se->info));
        printf("%d\n",*(se->next));
        return 0;
}
                   
