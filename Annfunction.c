#include <stdio.h>
#include <stdlib.h>

struct Psiho            //Структура//

{
    
    int data;
    
    struct Psiho *next;
    
};


typedef struct Psiho STACK;

typedef STACK *UKAZ;


void push(UKAZ *, int);         //Ввод нового элемента//

int pop(UKAZ *);                //Удаление элемента//

int isEmpty(UKAZ);              //Проверка на пустоту//

void printStack(UKAZ);          //Вывод стека//

void instructions(void);        //Интсрукция//

void instructions1(void);       //Интсрукция//

void instructions2(void);       //Интсрукция//

void delete_d(UKAZ,int);          //Удаление элемента*//

void pasteUp(UKAZ*,int,int );   //Вставить элемент до//

void pasteDown(UKAZ*,int,int ); //Вставить элемент после//

void dv(UKAZ *,UKAZ *);         //Удаление двойников элементов//

void change(UKAZ*, int, int);   //Замена элемента//

void invert(UKAZ *);            //Инвертирование//

void SumStack(UKAZ *,UKAZ *,UKAZ *);  //Функция сложения стеков//

void fusion(UKAZ *,UKAZ *,UKAZ *);    //Слитие двух стеков//

void copyStack (UKAZ *, UKAZ *);      //Копирование стека//

void del(UKAZ *);                     //Удаление стека//

int length(UKAZ *);                   //Длина стека//

void sortStack(UKAZ *);               //Функция сортировки по ключу//

void delete1(UKAZ, int );            //Удаление элемента по номеру//

int main (void)

{
    int Nstk, oldelement, newelement,  k;
    
    UKAZ stackPtr = NULL;
    UKAZ stackPtr1 = NULL;
    UKAZ stackPtr2 = NULL;
    
    int choice, value;
    
    instructions();
    
    printf ("? ");
    
    scanf("%d", &choice);
    
    while (choice !=18)
        
    {
        
        switch (choice)
        
        {
                
            case 1:   //Ввод нового элемента в стек
                
                printf ("Enter an integer: ");
                scanf("%d", &value);
                
                push(&stackPtr, value);
                
                printStack(stackPtr);
                
                break;
                /**********************************************************************************/
                
            case 2:    //Удаление элемента из стек
                
                if (!isEmpty(stackPtr))
                    
                    printf("The popped value is %d.\n", pop (&stackPtr));
                
                printStack(stackPtr);
                
                break;
                
                /**********************************************************************************/
                
            case 3:      //Удаление первого встретившегося элемента по значению
                
                printf("Input value: ");
                scanf("%d", &Nstk);
                
                delete_d(stackPtr, Nstk);
                
                printStack(stackPtr);
                
                break;
                /**********************************************************************************/
                
            case 4: // замена элемента
                
                printf("Input value: ");
                scanf("%d", &oldelement);
                
                printf("New value:");
                scanf("%d", &newelement);
                
                change(&stackPtr, oldelement, newelement);
                
                printStack(stackPtr);
                break;
                /**********************************************************************************/
            case 5: // Инверитирование
                
                if (!isEmpty(stackPtr)) // Проверка на пустоту стэка
                {
                    invert(&stackPtr); // Функция инвертирования
                    printStack(stackPtr); // печать получившегося стека
                }
                else
                    printf("STACK is empty\n");
                
                break;
                /**********************************************************************************/
            case 6:       //Работа со стеком №2
                
                instructions1();
                
                printf ("? ");
                scanf("%d", &choice);
                
                while (choice !=8)
                    
                {
                    
                    switch (choice)
                    
                    {
                            
                        case 1:    //Ввод нового элемента в стек
                            
                            printf ("Enter an integer: ");
                            scanf("%d", &value);
                            
                            push(&stackPtr1, value);
                            
                            printStack(stackPtr1);
                            
                            break;
                            /**********************************************************************************/
                            
                        case 2:     //Удаление элемента из стек
                            
                            if (!isEmpty(stackPtr1))
                                
                                printf("The popped value is %d.\n", pop (&stackPtr1));
                            
                            printStack(stackPtr1);
                            
                            break;
                            /**********************************************************************************/
                            
                        case 3://удаление
                            
                            printf("Input value: ");
                            scanf("%d", &Nstk);
                            
                            delete_d(stackPtr, Nstk);
                            
                            printStack(stackPtr1);
                            
                            break;
                            /**********************************************************************************/
                            
                        case 4: // замена элемента
                            
                            printf("Input value: ");
                            scanf("%d", &oldelement);
                            
                            printf("New value:");
                            scanf("%d", &newelement);
                            
                            change(&stackPtr1, oldelement, newelement);
                            
                            printStack(stackPtr1);
                            
                            break;
                            /**********************************************************************************/
                        case 5: // Инверитирование
                            
                            if (!isEmpty(stackPtr1)) // Проверка на пустоту стэка
                            {
                                invert(&stackPtr1); // Функция инвертирования
                                printStack(stackPtr1); // печать получившегося стека
                            }
                            else
                                printf("STACK is empty\n");
                            
                            break;
                            /**********************************************************************************/
                        case 6:    //Длина стека
                            
                            printf("length(длина стека):%d \n", length(&stackPtr1));
                            
                            break;
                            /**********************************************************************************/
                        case 7:    //Удалениее стека
                            
                            if (!isEmpty(stackPtr1))
                                del(&stackPtr1);
                            printf("Stack is empty (стек пуст)\n");
                            
                            break;
                            /**********************************************************************************/
                        default:
                            
                            printf("Invalid choice.\n\n");
                            
                            instructions1 ();
                            
                            break;
                            
                    }
                    
                    printf("? ");
                    scanf("%d", &choice);
                    
                }
                
                instructions ();
                break;
                /**********************************************************************************/
                
            case 7:            //Работа со стеком №3
                
                instructions2();
                
                printf ("? ");
                scanf("%d", &choice);
                
                while (choice !=5)
                    
                {
                    
                    switch (choice)
                    
                    {
                            
                        case 1:   //Вывод стека
                            
                            printStack(stackPtr2);
                            
                            break;
                            
                            /**********************************************************************************/
                        case 2:    //Длина стека
                            
                            printf("length(длина стека):%d \n", length(&stackPtr2));
                            break;
                            
                            /**********************************************************************************/
                        case 3:    //Удалениее стека
                            
                            if (!isEmpty(stackPtr2))
                                del(&stackPtr2);
                            printf("Stack is empty (стек пуст)\n");
                            
                            break;
                            
                            /**********************************************************************************/
                            
                        case 4: ////Копирование стека в стек №1
                            
                            del(&stackPtr);  //Осчистили стек для сохранения
                            copyStack (&stackPtr2, &stackPtr);
                            printStack (stackPtr);
                            break;
                            /**********************************************************************************/
                        default:
                            
                            printf("Invalid choice.\n\n");
                            
                            instructions2 ();
                            
                            break;
                            /**********************************************************************************/
                    }
                    
                    printf("? ");
                    scanf("%d", &choice);
                }
                instructions ();
                
                break;
                /**********************************************************************************/
                
            case 8:   //Сумма двух стеков
                
                del(&stackPtr2);  //Осчистили стек для сохранения
                SumStack(&stackPtr,&stackPtr1,&stackPtr2);
                printStack(stackPtr2);
                
                break;
                /**********************************************************************************/
            case 9:    //Слитие двух стеков
                
                del(&stackPtr2);  //Осчистили стек для сохранения
                fusion(&stackPtr,&stackPtr1,&stackPtr2);
                printStack(stackPtr2);
                
                break;
                
                /**********************************************************************************/
            case 10:    //Копирование стека
                
                del(&stackPtr2);  //Осчистили стек для сохранения
                copyStack (&stackPtr, &stackPtr2);
                printStack (stackPtr2);
                
                break;
                
                /**********************************************************************************/
                
            case 11:    //Длина стека
                
                printf("length(длина стека):%d \n", length(&stackPtr));
                
                break;
                
                /**********************************************************************************/
            case 12:    //Удалениее стека
                
                if (!isEmpty(stackPtr))
                    del(&stackPtr);
                
                printf("Stack is empty (стек пуст)\n");
                
                break;
                /**********************************************************************************/
                
            case 13:
                
printf("Ведите номер элемента перед которым хотите вставить новый элемент \n");
                int nn=0;
                int jj=0;
                scanf("%d %d",&nn,&jj);
                pasteUp(&stackPtr, nn , jj );
                printStack(stackPtr);
                
                break;
                
                /**********************************************************************************/
                
            case 14:
                
printf("Ведите номер элемента после которого хотите вставить новый элемент \n");
                int el=0;
                int znach=0;
                scanf("%d %d",&el,&znach);
                el++;
                
                pasteDown(&stackPtr, el , znach );
                printStack(stackPtr);
                
                break;
                
                /**********************************************************************************/
                
            case 15:           //Удаление двойников
                
                del(&stackPtr2);
                dv(&stackPtr, &stackPtr2);
                printStack(stackPtr2);
                
                
                break;
                /**********************************************************************************/
            case 16:          //Сортировка по ключу
                
                if (!isEmpty(stackPtr))
                    sortStack(&stackPtr);
                printf("Stack sorted");
                printStack(stackPtr);
                
                break;
                /**********************************************************************************/
                
            case 17:       //Удаление элемента по номеру
                
                printf("Input the element's number which you waht to be deleted: ");
                scanf("%d", &k);
                
                delete1(stackPtr, k);
                printStack(stackPtr);
                
                break;
                
                /**********************************************************************************/
                
            default:
                
                printf("Invalid choice.\n\n");
                instructions ();
                
                break;
                /**********************************************************************************/
        }
        
        printf("? ");
        
        scanf("%d", &choice);
        
    }
    
    printf("End of run.\n");
    
    return 0;
    
}

void instructions(void)

{
    
    printf(
           "----------------------------------------------------------------------------\n"
           "*****STACK №1*****\n"
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
           
           "11 The length of the stack(длина стека)\n"
           
           "12 Stack removal(удаление стека)\n"
           
           "13 Insert up (Вставить элемент до) \n"
           
           "14 Insert after (Вставка стека)\n"
           
           "15 Removing doubles (Удаление двойников)\n"
           
           "16 A function to sort by key (Функция сортировки по ключу)\n"
           
           "17 Deleting an item by number (Удаление элемента по номеру)\n"
           
           "18 to end program\n"
           "----------------------------------------------------------------------------\n" );
    
}

void instructions1(void)

{
    
    printf("----------------------------------------------------------------------------\n"
           "*****STACK №2*****\n"
           "Enter choice:\n"
           
           "1 to push a value on the stack(добавить элемент)\n"
           
           "2 to pop a value off the stack(удалить элемент)\n"
           
           "3 to remove the element(удаление элемента(ов))\n"
           
           "4 to change the element to another(замена элемента)\n"
           
           "5 invert(инвертирование)\n"
           
           "6 The length of the stack(длина стека)\n"
           
           "7 Stack removal(удаление стека)\n"
           
           "8 to end program\n"
           "----------------------------------------------------------------------------\n" );
    
}

void instructions2(void)

{
    
    printf("----------------------------------------------------------------------------\n"
           "*****STACK №3*****\n"
           "Enter choice:\n"
           
           "1 print\n"
           
           "2 The length of the stack(длина стека)\n"
           
           "3 Stack removal(удаление стека)\n"
           
           "4 to copy the stack(копирование стека)\n"
           
           "5 to end program\n"
           "----------------------------------------------------------------------------\n" );
    
}

void push(UKAZ *topPtr, int info)

{
    //Необходимые "помощники"
    UKAZ newPtr;
    newPtr =(STACK *) malloc(sizeof(STACK));    //Создаём новую строчку стека//
    
    
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
    //Необходимые "помощники"
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


void delete_d(STACK *stackPtr, int Nstk)

{
    //Необходимые "помощники"
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
    //Необходимые "помощники"
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
    //Необходимые "помощники"
    
    UKAZ  SAVE; // Хранение адреса предыдущего элемента
    UKAZ VR; // Промежуточное хранение
    int i=1;
    
    while( i!=0)
        
    {
        if(i==1 && (*topPtr)->next!=NULL) // Первое вхождение и следующий элемент не нулевой
            
        {
            VR=(*topPtr)->next; // Хранение адреса на следующий элемент
            
            
            (*topPtr)->next=NULL; // то есть первый элемент становиться последним
            
            SAVE=*topPtr;
            
            *topPtr=VR; //Головой становиться второй элемент стека
            
            i=2; // Чтобы не возвращаться к этому условию
            
        }
        
        
        if(i!=1 && (*topPtr)->next==NULL) // Если не первое вхождение и следующий элемент нулевой
        {
            i=0; // Для выхода
            
            (*topPtr)->next=SAVE; // В ячейку next последней структуры записываем адрес предыдущего элемента
        }
        
        else
            if(i !=1 && (*topPtr)->next!=NULL) // не первое вхождение и следующий элемент не нулевой
                
            {
                i++;
                
                VR=(*topPtr)->next;
                
                
                (*topPtr)->next=SAVE; // В ячейку next этой структуры записываем адрес предыдущего элемента
                
                SAVE=*topPtr; // Сохраняем адрес нынешней головы
                
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
    invert(headst3);
}


void fusion(UKAZ *A, UKAZ *B, UKAZ *C)  //Слитие двух стеков
{
    UKAZ* st1=A;
    UKAZ* st2=B;
    
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
    
    invert(C);
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
    invert (headstack2);
}



void del(UKAZ *topPtp)  //Удаление стека
{
    UKAZ tempPtr;
    
    while(*topPtp!=NULL)
    {
        tempPtr = *topPtp;
        
        *topPtp =(*topPtp)->next;
        
        free(tempPtr);                   //Удаление элемента
    }
}

int length(UKAZ *topPtr)
{
    int k=0;
    
    UKAZ X=*topPtr; // Сохраним адрес первого элемента первого стека
    
    while(*topPtr!=NULL)
    {
        *topPtr=(*topPtr)->next;
        
        k++;
    }
    
    *topPtr=X; // сохранения головы стека
    
    return k;
    
}


void pasteUp (UKAZ *topPtr, int n, int info)
{
    
    UKAZ newPtr;
    UKAZ elemDo = NULL, elemPos = NULL;
    UKAZ X=*topPtr;
    
    int i,l,w;
    
    l=length(topPtr);
    
    newPtr = (STACK *)malloc(sizeof(STACK));    //Создаём новую строчку стека//
    
    w=l-n;
    if (n<0 || n>l || n==0){
        printf("Incorrect number\n");
        return;
        
    }
    if (topPtr != NULL)
        
    {
        for (  i=0; i<w; i++)
        {
            
            *topPtr =(*topPtr)->next;   // скопировали адрес элемента до которого надо вставить
        }
        
        elemDo=*topPtr;
        
        for(  i=0; i<1; i++)
        {
            
            *topPtr = (*topPtr)->next;
            
            // скопировали адрес элемента следущего  до которого надо вставить
            
        }
        
        elemPos=*topPtr;
        
    } else{
        
       printf("Steck is empty\n");
        return;
        
    }
    
    if (newPtr != NULL)
        
    {
        
        newPtr->data = info;
        
        newPtr->next = elemPos;
        
        elemDo->next = newPtr;
        
    }
    
    
    else {
        
        printf("%d not inserted. No memory available.\n", info);
    }
    
    *topPtr=X;
}

void pasteDown (UKAZ *topPtr, int n, int info)
{
    
    UKAZ newPtr;
    UKAZ elemDo = NULL, elemPos = NULL;
    UKAZ X=*topPtr;
    
    int i,l,w;
    
    l=length(topPtr);
    
    newPtr = (STACK *)malloc(sizeof(STACK));    //Создаём новую строчку стека//
    
    w=l-n;
    if (n<0 || n>l+1 || n==0){
        printf("Incorrect number\n");
        return;
        
    }
    if (n==l+1){
        
        push(topPtr, info);
        return;
        
    }
    
    if (topPtr != NULL)
        
    {
        for (  i=0; i<w; i++)
        {
            
            *topPtr =(*topPtr)->next;   // скопировали адрес элемента до которого надо вставить
        }
        
        elemDo=*topPtr;
        
        for(  i=0; i<1; i++)
        {
            
            *topPtr = (*topPtr)->next;
            
            // скопировали адрес элемента следущего  до которого надо вставить
            
        }
        
        elemPos=*topPtr;
        
    } else{
        
        printf("Steck is empty\n");
        return;
        
    }
    
    if (newPtr != NULL)
        
    {
        
        newPtr->data = info;
        
        newPtr->next = elemPos;
        
        elemDo->next = newPtr;
        
    }
    
    
    else {
        
        printf("%d not inserted. No memory available.\n", info);
    }
    
    *topPtr=X;
}



void dv(UKAZ *topPtr,UKAZ *topPtr2)
{
    
    UKAZ B;
    
    B = *topPtr;
    int i,l;
    int k = length(topPtr);
    
    int *A;
    
    A=(int*)malloc(k*sizeof(int));
    
    if( topPtr!=NULL)
    {
        for(  i=0; i<k; i++)
        {
            *(A+i)=(*topPtr)->data;
            *topPtr=(*topPtr)->next;
        }
        
    }
    
    *topPtr = B;
    
    int w=0;
    
    for ( l = 0; l<k; l++)
    {
        w=0;
        
        for ( i=(l+1); i<k; i++)
        {
            
            if(*(A+l)== *(A+i))
            {
                w++;
            }
            
        }
        if(w==0)
        {
            push(topPtr2, *(A+l));
        }
    }
    invert(topPtr2);
}

//функция сортировки
void sortStack(UKAZ *topPtr)
{
    UKAZ Save= *topPtr;//сохранение адреса 1 элемента
    
    int i,j,k,z, n,tmp;
    
    n=length(topPtr);//находим колличество элементов в стеке
    
    int a[n]; //составляем массив, где колличество элементов равно длине стека
    
    while(*topPtr!=NULL)
    {
        
        for( i=0;i<n;i++)//превращаем стек в массив
        {
            a[i]=(*topPtr)->data;
            *topPtr=(*topPtr)->next;
        }
        
        for ( k =0; k<n ; k++)// делаем сортировку пузырьком
        {
            
            for ( j = 0; j <n-k-1; j++)
                
                if (a[j] > a[j + 1])
                {
                    tmp = a[j];
                    
                    a[j] = a[j + 1];
                    
                    a[j + 1] = tmp;
                }
        }
        
        *topPtr=Save;
        
        for( z=0; z<n;z++)// отсортированные значения записываем в стек
        {
            (*topPtr)->data=a[z];
            *topPtr=(*topPtr)->next;
        }
    }
    
    *topPtr=Save;
}

void delete1(STACK *stackPtr, int k)

{      int i;
    
    STACK *p=stackPtr; //поставить вспомогательную переменную на начало списка
    
    if(length(&stackPtr)-k==0)//удалить первый элемент
        
    {
        printf("Use the function pop to delete the highest element!\n");
        
        return;
        
    }
    
    /*если удаляется элемент из середины списка, пройти по
     
     списку либо до элемента с предыдущим номером, либо до конца списка*/
    
    for( i=0;i< length(&stackPtr)-k-1 && p!=0;i++,p=p->next);
    
    //если в списке нет элемента с номером k
    
    if(p==0||p->next==0)
        
        return;
    
    //если в списке есть элемент с номером k
    
    STACK*r=p->next; //встать на удаляемый элемент, STACK *r- вспомогательная переменная
    
    p->next=r->next; //изменить ссылку
    
    free(r); //удалить r
    
    r=p->next; //встать на следующий
}
