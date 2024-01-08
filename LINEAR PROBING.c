#include <stdio.h>
#include<stdlib.h>
#define table_size 10
int h[table_size]={NULL};
void insert()
{
 int key,index,i,flag=0,hkey;
 printf("\nenter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=key%table_size;
 for(i=0;i<table_size;i++)
    {
     index=(hkey+i)%table_size;
     if(h[index] == NULL)
     {
        h[index]=key;
         break;
     }
    }
    if(i == table_size)
     printf("\nelement cannot be inserted\n");
}
void search()
{
 int key,index,i,flag=0,hkey;
 printf("\nenter search element\n");
 scanf("%d",&key);
 hkey=key%table_size;
 for(i=0;i<table_size; i++)
 {
    index=(hkey+i)%table_size;
    if(h[index]==key)
    {
      printf("value is found at index %d",index);
      break;
    }
  }
  if(i == table_size)
    printf("\n value is not found\n");
}
void display()
{
  int i;
  printf("\nelements in the hash table are \n");
  for(i=0;i< table_size; i++)
  printf("\nat index %d \t value =  %d",i,h[i]);
}
main()
{
    int opt,i;
    while(1)
    {
        printf("\nPress 1. Insert\t 2. Display \t3. Search \t4.Exit \n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
        }
    }
}
