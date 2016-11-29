#include<stdio.h>
#include<stdlib.h>
#define NULL 0

struct linked_list
{
    int number;
    struct linked_list*next;
};
typedef struct linked_list node;

main()
            {
                node*head;
                void create(node*p);
                int count(node*p);
                void print(node*p);
                head=(node*)malloc(sizeof(node));
                create(head);
                printf("\n");
                print(head);
                
            }
void create(node*list)
{
    printf("input a no.\n");
    printf("type -999 at end");
    scanf("%d", &list->number);
    if(list->number == -999)
    {
        list->next = NULL;
        
    }
    else
    {
        list->next =(node*)malloc(sizeof(node));
        create(list->next);
    }
    return;
}
void print(node*list)
{
    if(list->next !=NULL)
    {
        printf("%d->",list->number);
        
        if(list->next->next ==NULL)
        
            printf("%d",list->next->number);
        
        print(list->next);
        }
    return;
}



    
