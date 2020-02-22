//
//  Kursovaya.c
//  2Semestr
//
//  Created by Алексей Крутов on 07/04/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>

struct Psiho            //Структура//

{
    
    int data;
    
    struct Psiho *next;
    
};


typedef struct Psiho STACK;

typedef STACK *UKAZ;// указатель на стек получается


void push(UKAZ *, int);   //Ввод нового элемента//

int pop(UKAZ *);         //Удаление элемента//

int isEmpty(UKAZ);

void printStack(UKAZ);    //Вывод стека//

void instructions(void);    //Интсрукция//

void instructions1(void);    //Интсрукция//

void instructions2(void);    //Интсрукция//

void delete(UKAZ* ,int, int );       //Удаление элемента*//
// Вставить до
void pasteUp(UKAZ*,int,int );
//Вставить после
void pasteDown (UKAZ, int);


void change(UKAZ*, int, int);     //Замена элемента//

void invert(UKAZ *);           //Инвертирование

void SumStack(UKAZ *,UKAZ *,UKAZ *);  //Функция сложения стеков

void fusion(UKAZ *,UKAZ *,UKAZ *);  //Слитие двух стеков

void copyStack (UKAZ *, UKAZ *);   //Копирование стека


int main (void)

{
    int Nstk, oldelement, newelement;
    
    UKAZ stackPtr = NULL;
    UKAZ stackPtr1 = NULL;
    UKAZ stackPtr2 = NULL;
    
    int choice, value;
    
    instructions();
    
    printf ("? ");
    
    scanf("%d", &choice);
    
    while (choice !=11)
        
    {
        
        switch (choice)
        
        {
                
            case 1:
                
                printf ("Enter an integer: ");
                
                scanf("%d", &value);
                
                push(&stackPtr, value);
                
                printStack(stackPtr);
                
                break;
                
                
            case 2:
                
                if (!isEmpty(stackPtr))
                    
                    printf("The popped value is %d.\n", pop (&stackPtr));
                
                printStack(stackPtr);
                
                break;
                
            default:
                
                printf("Invalid choice.\n\n");
                
                instructions ();
                
                break;
                
                
            case 3://удаление
                
                printf("Input value: ");
                
                scanf("%d", &Nstk);
                
                delete1(stackPtr, Nstk);
                
                printStack(stackPtr);
                
                break;
                
                
            case 4: // замена элемента
                
                printf("Input value: ");
                
                scanf("%d", &oldelement);
                
                printf("New value:");
                
                scanf("%d", &newelement);
                
                change(&stackPtr, oldelement, newelement);
                
                printStack(stackPtr);
                
                break;
                
            case 5: // Инверитирование
                if (!isEmpty(stackPtr)) // Проверка на пустоту стэка
                {
                    invert(&stackPtr); // Функция инвертирования
                    printStack(stackPtr); // печать получившегося стека
                }
                else
                    printf("STACK is empty\n");
                
                break;
                
            case 6:
                
                instructions1();
                
                printf ("? ");
                
                scanf("%d", &choice);
                
                while (choice !=6)
                    
                {
                    
                    switch (choice)
                    
                    {
                            
                        case 1:
                            
                            printf ("Enter an integer: ");
                            
                            scanf("%d", &value);
                            
                            push(&stackPtr1, value);
                            
                            printStack(stackPtr1);
                            
                            break;
                            
                            
                        case 2:
                            
                            if (!isEmpty(stackPtr1))
                                
                                printf("The popped value is %d.\n", pop (&stackPtr1));
                            
                            printStack(stackPtr1);
                            
                            break;
                            
                        default:
                            
                            printf("Invalid choice.\n\n");
                            
                            instructions ();
                            
                            break;
                            
                            
                        case 3://удаление
                            
                            printf("Input value: ");
                            
                            scanf("%d", &Nstk);
                            
                            delete1(stackPtr, Nstk);
                            
                            printStack(stackPtr1);
                            
                            break;
                            
                            
                        case 4: // замена элемента
                            
                            printf("Input value: ");
                            
                            scanf("%d", &oldelement);
                            
                            printf("New value:");
                            
                            scanf("%d", &newelement);
                            
                            change(&stackPtr1, oldelement, newelement);
                            
                            printStack(stackPtr1);
                            
                            break;
                            
                        case 5: // Инверитирование
                            if (!isEmpty(stackPtr1)) // Проверка на пустоту стэка
                            {
                                invert(&stackPtr1); // Функция инвертирования
                                printStack(stackPtr1); // печать получившегося стека
                            }
                            else
                                printf("STACK is empty\n");
                            
                            break;
                            
                    }
                    
                    printf("? ");
                    
                    scanf("%d", &choice);
                    
                }
                instructions ();
                break;
                
            case 7:
                
                instructions2();
                
                printf ("? ");
                
                scanf("%d", &choice);
                
                while (choice !=2)
                    
                {
                    
                    switch (choice)
                    
                    {
                            
                        case 1:
                            
                            printStack(stackPtr2);
                            
                            break;
                            
                    }
                    
                    printf("? ");
                    
                    scanf("%d", &choice);
                    
                }
                instructions ();
                break;
                
            case 8:   //Сумма двух стеков
                // добавить функцию удаления третьего стека
                SumStack(&stackPtr,&stackPtr1,&stackPtr2);
                printStack(stackPtr2);
                break;
                
            case 9:    //Слитие двух стеков
                // добавить функцию удаления третьего стека
                fusion(&stackPtr,&stackPtr1,&stackPtr2);
                invert(&stackPtr2); // Функция инвертирования
                printStack(stackPtr2);
                break;
                
            case 10:    //Копирование стека
                // добавить функцию удаления третьего стека
                copyStack (&stackPtr, &stackPtr2);
                invert (&stackPtr2);
                printStack (stackPtr2);
                
                break;
                
        }
        
        printf("? ");
        
        scanf("%d", &choice);
        
    }
    
    printf("End of run.\n");
    
    return 0;
    
}

void instructions(void)

{
    
    printf("*****STACK №1*****\n"
           "Enter choice:\n"
           
           "1 to push a value on the stack(добавить элемент)\n"
           
           "2 to pop a value off the stack(удалить элемент)\n"
           
           "3 to remove the element(удаление элемента(ов))\n"
           
           "4 to change the element to another(замена элемента)\n"
           
           "5 invert(инвертирование)\n"
           
           "6 STACK №2\n"
           
           "7 STACK №3\n"
           
           "8 the amount of stacks (сумма стеков)\n"
           
           "9 merging two stacks  (слитие стеков)\n"
           
           "10 to copy the stack(копирование стека)\n"
           
           "11 to end program\n");
    
}

void instructions1(void)

{
    
    printf("*****STACK №2*****\n"
           "Enter choice:\n"
           
           "1 to push a value on the stack\n"
           
           "2 to pop a value off the stack\n"
           
           "3 to remove the element\n"
           
           "4 to change the element to another\n"
           
           "5 invert\n"
           
           "6 to end program\n");
    
}

void instructions2(void)

{
    
    printf("*****STACK №3*****\n"
           "Enter choice:\n"
           
           "1 print\n"
           
           "2 to end program\n");
    
}

void push(UKAZ *topPtr, int info)

{
    
    UKAZ newPtr;
    
    newPtr = malloc(sizeof(STACK));    //Создаём новую строчку стека//
    
    
    if (newPtr != NULL)
        
    {
        
        newPtr->data = info;
        
        newPtr->next = *topPtr;
        
        *topPtr = newPtr;
        
    }
    
    
    else
        
        printf("%d not inserted. No memory available.\n", info);
    
}


int pop(UKAZ *topPtr)

{
    
    UKAZ tempPtr;
    
    int popValue;
    
    tempPtr = *topPtr;
    
    popValue = (*topPtr)-> data;
    
    *topPtr = (*topPtr)-> next;
    
    free(tempPtr);                    //Удаляем//
    
    return popValue;
    
}



void printStack(UKAZ currentPtr)   //Вывод стека//

{
    
    if (currentPtr == NULL)
        
        printf ("The stack is empty.\n\n");
    
    else
        
    {
        
        printf("The stack is:\n");
        
        while (currentPtr != NULL)
            
        {
            
            printf("%d->", currentPtr->data);
            
            currentPtr = currentPtr->next;
            
        }
        
        printf ( "NULL\n\n");
        
    }
    
}


int isEmpty(UKAZ topPtr)

{
    
    return topPtr == NULL;
    
}


void delete1(STACK *stackPtr, int Nstk)

{
    
    STACK *m, *l;
    
    m=l=stackPtr;
    
    if (m == NULL)
        
    {
        
        printf("Error. Stack is empty.\n");
        
        return;
        
    }
    
    if (m->data == Nstk) {
        
        *stackPtr = *(stackPtr)->next;
        
        return;
        
    }
    
    while (m->data != Nstk)
        
    {
        
        if (m->next == NULL)
            
        {
            
            printf("Element not found!\n");
            
            return;
            
        }
        
        l = m;
        
        m = m->next;
        
    }
    
    l->next = m->next;
    
    printf("Deleted element : %d\n",Nstk);
    
}



void change(STACK** stackPtr, int oldelement, int newelement)

{
    
    STACK *m;
    
    m = *stackPtr;
    
    if (m == NULL)
        
    {
        
        printf("Error. Stack is empty.\n");
        
        return;
        
    }
    
    while (m->next != NULL)
    {
        
        if (m->data == oldelement)
        {
            m->data = newelement;
        }
        m = m->next;
        
    }
    
    if (m->data == oldelement)
        
    {
        m->data = newelement;
        return;
    }
    
    printf("The element has been changed\n");
    
}

void invert(UKAZ *topPtr) //Ивертирование
{
    UKAZ  SAVE; // Хранение адреса предыдущего элемента
    UKAZ VR,Y; // Промежуточное хранение
    int i=1;
    
    while( i!=0){
        
        
        if(i==1 && (*topPtr)->next!=NULL) // Первое вхождение и следующий элемент не нулевой
        {
            VR=(*topPtr)->next; // Хранение адреса на следующий элемент
            Y=*topPtr;
            (*topPtr)->next=NULL; // то есть первый элемент становиться последним
            SAVE=Y;
            *topPtr=VR; // Головой становиться второй элемент стека
            i=2; // Чтобы не возвращаться к этому условию
        }
        
        
        if(i!=1 && (*topPtr)->next==NULL) // Если не первое вхождение и следующий элемент нулевой
        {
            i=0; // Для выхода
            (*topPtr)->next=SAVE; // В ячейку next последней структуры записываем адрес предыдущего элемента
        }
        
        else if(i !=1 && (*topPtr)->next!=NULL) // не первое вхождение и следующий элемент не нулевой
        {
            i++;
            VR=(*topPtr)->next;
            Y=*topPtr;
            (*topPtr)->next=SAVE; // В ячейку next этой структуры записываем адрес предыдущего элемента
            SAVE=Y; // Сохраняем адрес нынешней головы
            *topPtr=VR; // Смещаем голову на следующий элемент
        }
        
        if(i==1 && (*topPtr)->next==NULL) //  Если в стеке рдин элемент
        {
            i=0;
        }
    }
    
}


// ФУНКЦИЯ СЛОЖЕНИЯ СТЕКОВ:

void SumStack(UKAZ *headst1,UKAZ *headst2,UKAZ *headst3) //СУММА СТЕКОВ

{
    
    UKAZ* UH1= headst1;
    UKAZ* UH2= headst2;
    UKAZ UH11=*headst1; // Сохраним адрес первого элемента первого стека
    UKAZ UH12=*headst2; // Сохраним адрес первого элемента второго стека
    //Вставить функцию удаления стэка stcptr2
    
    int VR;
    
    
    while((*UH1)!=NULL && (*UH2)!=NULL)  //  Пока есть следующий элемент в обоих стеках
    {
        VR=(*UH1)->data + (*UH2)->data;
        push (headst3 , VR);         // Используем функцию добавления элемента в  третий стек
        *UH1=(*UH1)->next;
        *UH2=(*UH2)->next;
        
    }
    
    *headst1=UH11; // Голова-первый элемент первого стека
    *headst2=UH12; // Голова-первый элемент второго стека
    
}


void fusion(UKAZ *A, UKAZ *B, UKAZ *C)  //Слитие двух стеков
{
    UKAZ* st1=A; // Сохраним адрес первого элемента первого стека
    UKAZ* st2=B; // Сохраним адрес первого элемента второго стека
    
    UKAZ X=*A; // Сохраним адрес первого элемента первого стека
    UKAZ Y=*B; // Сохраним адрес первого элемента второго стека
    
    int Zn;
    if((*st1)!=NULL)
    {
        while((*st1)!=NULL)
        {
            Zn=(*st1)->data;
            *st1=(*st1)->next;
            push (C, Zn);         // Используем функцию добавления элемента в  третий стек
        }
    }
    
    if((*st2)!=NULL)
    {
        while((*st2)!=NULL)
        {
            Zn=(*st2)->data;
            *st2=(*st2)->next;
            push (C, Zn);         // Используем функцию добавления элемента в  третий стек
        }
    }
    
    *A=X; // Голова-первый элемент первого стека
    *B=Y; // Голова-первый элемент второго стека
    
    
}


void copyStack (UKAZ *headstack1, UKAZ *headstack2) // копирование стеков (указатель на голову исходного стека, указатель на голову скопированного стека) //

{
    
    UKAZ* h1 = headstack1; // создаем переменную //
    
    UKAZ h11 = *headstack1; // сохраняем адрес головы исходного стека //
    
    int x; // переменная для хранения данных //
    
    while ((*h1) != NULL) // повторяем пока следующий элемент существует //
        
    {
        
        x=(*h1)->data; // запоминаем текущий элемент //
        
        push (headstack2, x); // добавляем этот элемент во второй стек //
        
        *h1=(*h1)-> next; // переходим к следующему элементу в исходном стеке //
        
    }
    
    *headstack1=h11; // возвращаем голову исходного стека на первый элемент стека //
    
}




void pasteUp (UKAZ *topPtr, int n, int info) {
    
    UKAZ newPtr;
    UKAZ elemDo, elemPos;
    
    newPtr = malloc(sizeof(STACK));    //Создаём новую строчку стека//
    
    
    if (topPtr != NULL)
        
    {
        for ( int i=0; i<n; i++){
            
            *topPtr =(*topPtr)->next;
            
            // скопировали адрес элемента до которого надо вставить
        }
        elemDo=*topPtr;
        
        for( int i=0; i<1; i++){
            
            *topPtr = (*topPtr)->next;
            
            // скопировали адрес элемента следущего  до которого надо вставить
            
        }
        elemPos=*topPtr;
        
    }
    
    if (newPtr != NULL)
        
    {
        
        newPtr->data = info;
        
        newPtr->next = elemPos;
        
        elemDo = newPtr;
        
    }
    
    
    else
        
        printf("%d not inserted. No memory available.\n", info);
    
}


