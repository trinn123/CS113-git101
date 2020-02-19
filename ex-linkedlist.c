// 6210402429 Trinn Suwanich
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
};

int main()
{
    
    int input;
    struct node *start,*head,*p,*compa;
    start = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&input);
    start -> data = input;
    start -> next = NULL;
    start -> prev = NULL;
    head = start;
    p = head;
    
    while (1)
    {
        
        scanf("%d",&input);

		if(input == -1)break;

        start = (struct node *)malloc(sizeof(struct node));
        start -> data = input;
        start -> next = NULL;
        start -> prev = p;
        p -> next = start;
        p = p -> next;
        compa = start;
		
		while(compa -> prev != NULL)
        {
            int n;
            if (compa -> data < (compa -> prev) -> data)
            {
                n = (compa -> data);
                compa -> data = (compa -> prev) -> data;
                (compa -> prev) -> data = n;

            }
            compa = compa -> prev;
        }

    }
    
    for(start = head ; start ; start = start -> next)
    {
        printf("%d\n", start -> data);
    }
    
}