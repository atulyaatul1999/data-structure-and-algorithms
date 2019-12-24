#include<stdio.h>
#include<malloc.h>

struct node
{
int data;
struct node *r;
};
struct node *last=NULL;
struct node *createnode()
{
struct node * n;
n=(struct node *)(malloc(sizeof(struct node)));
return(n);
}
void insertfirst()
{
    struct node *t;
    t=createnode();
    printf("enter the number that you want to enter\n");
    scanf("%d",&t->data);
if(last==NULL)
{
      last=t;
     t->r=last;
}
else
{
t->r=last->r;
last->r=t;
}
};
void insertlast()
{
  struct node *t;
  t=createnode();
  printf("enter the number that you want to enter\n")  ;
  scanf("%d",&t->data);
  if(last==NULL)
  {
      last=t->r;
      t->r=last;
  }
  else
{
   t->r=last->r;
   last->r=t;
   last=t;
  }
    }
void showlist()
{
    struct node *t;

    if(last==NULL)
    {
        printf("list is empty\n");
    }
    else{
             t=last->r;
    do
    {
        printf("%d\n",t->data);
        t=t->r;
    }while(t!=last->r);

}
}
main()
{

 showlist();
 insertfirst();
 showlist();
 insertfirst();
 showlist();
 insertlast();
 showlist();
 insertfirst();
 showlist();
}
