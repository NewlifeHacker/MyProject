//
//  stec.c
//  2Semestr
//
//  Created by Алексей Крутов on 28/03/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
struct stackNode {
    int data;
    struct stackNode *nextPtr;
};

typedef struct stackNode STACKNODE;
typedef STACKNODE *STACKNODEPTR;

void push(STACKNODEPTR *, int);
int pop(STACKNODEPTR *);
int isEmpcy(STACKNODEPTR);
void printStack(STACKNODEPTR);
void instructions(void);
int main ()
{
    STACKNODEPTR stackPtr = NULL; // указывает на вершину
    int choice, value;
    instructions();
    printf ("? ");
    scanf("%d", &choice) ;
    while (choice !=3) {
        switch (choice) {
                
            case 1: /* заталкивает значение в стек */
                printf ("Enter an integer: ");
                scanf("%d", &value);
                push(&stackPtr, value);
                printStack(stackPtr);
                break;
            case 2: // выталкивает значение из стека
                if (!isEmpcy(stackPtr))
                    printf("The popped value is %d.\n", pop (&stackPtr));
                printStack(stackPtr);
                break;
                
            default:
                printf("Invalid choice.\n\n");
                instructions ();
                break;
        }
        printf("? ");
        scanf("%d", &choice);
    }
    printf("End of run.\n");
    return 0;
}

/* Распечатка инструкций */
void instructions(void)
{
    printf("Enter choice:\n"
           "1 to push a vaiue on the stack\n"
           "2 to pop a value off the stack\n"
           "3 to end program\n");
}

/* Помещение нового значения на вершину стека */
void push(STACKNODEPTR *topPtr, int info)
{
    STACKNODEPTR newPtr;
    
    newPtr = malloc(sizeof(STACKNODE));
    if (newPtr != NULL)
    {
        newPtr-> data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    }
    else
        printf("%d not inserted. No memory available.\n", info);
}
/* Удаление узла на вершине стека */
int pop(STACKNODEPTR *topPtr)
{
    STACKNODEPTR tempPtr;
    int popValue;
    
    tempPtr = *topPtr;
    popValue = (*topPtr)-> data;
    *topPtr = (*topPtr)-> nextPtr;
    free(tempPtr);
    return popValue;
}

/* Распечатка стека */
void printStack(STACKNODEPTR currentPtr)
{
    if (currentPtr == NULL)
        printf ("The stack is empty.\n\n");
    
    
    else {
        printf("The stack is:\n");
        
        while (currentPtr != NULL) {
            printf("%d->", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf ( "NULL\n\n");
    }
}

/* Стек пуст? */
int isEmpcy(STACKNODEPTR topPtr)
{
    return topPtr == NULL;
}
