//
//  STACK_READY.hpp
//  2Semestr
//
//  Created by Алексей Крутов on 01/06/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#ifndef STACK_READY_hpp
#define STACK_READY_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class stack
{
private: 
    int data;
    stack *next;
    
public:
    stack* operator*(stack *);                      //Слитие стеков -> C
    stack* revin(int);                              //Обратный ввод элемента
    stack* ZnUd( );                                 //Удаление элемента(-ов) по значению
    friend ostream&operator<<(ostream&, stack*);    //Перегрузка вывода
    friend stack* operator>>(istream&, stack*);     //Перегрузка ввода
    void pop(stack**);
    int dlina();                                    //Длина
    stack(int= 0,stack* = NULL);                    //Конуструктор
    ~stack();                                       //Диструктор
    friend int isEmpty(stack *);                    //Проверка на пустоту//
    void del(stack**);
    stack* pasteDown  (stack *, int, int );                  //Вставка элемента после
    stack* pasteUp  (stack *, int, int );                     //Вставка элемента до
    void change();                                  //Замена
    int delete1();                                  // удаление по номеру
    stack & operator++();                           // прибавлеение 1 к элементам
    void dv(stack **);                             //Удаление двойников элементов//
    stack& operator-( stack& );                     //разность
    stack& operator+( stack& );                     // Сумма
    void invert(stack**);                           //инвертирование
    stack* push(stack* a, int x)                    //Ввод элемента
    {
        stack * B;B=new stack(x,a);
        return B;
        
    }
    stack &operator=(stack*);                       //Перегрузка присваивания
    stack(const stack &);                           //Конструктор копирования
    
};

void instructions();                            //Инструкция к стеку №1
void instructions1();                           //Инструкция к стеку №2
void instructions2();                           //Инструкция к стеку №3


















stack::stack(int k,stack *P)
{   data=k;
    next = P;
}

stack::~stack()//деструктор
{
    
}


ostream& operator<<(ostream& output, stack *a)//перегрузка оператора вывода
{
    stack *A;
    A=a;
    if (A == NULL)
        
        cout<<"The stack is empty.\n\n";
    
    else
        
    {
        
        cout<<"The stack is:\n";
        
        while (A != NULL)
            
        {
            
            cout<<A->data<<"->";
            
            A = A->next;
            
        }
        
        cout<< "NULL\n\n";
        
    }
    
    
    
    return output;
}

stack* operator>>(istream& input, stack* a)   //перегрузка оператора ввода
{   stack * B;
    int x;
    cout<< "Введите элемент:";
    cin>> x;
    B=new stack(x,a);
    return B;
}

void stack::pop(stack** A)
{
    *A=this;
    stack *m;
    m=*A;
    
    if (isEmpty(m))
    {
        
        cout<<"Error. Stack is empty."<<"\n";
        
        return;
        
    }
    
    else
    {
        *A=(*A)->next;
        delete m;
    }
    return;
}


void stack:: dv(stack**topPtr)
{
    
    
    
    stack *B = this;
    int i,l;
    int k = this->dlina();
    
    int *A;
    
    A=(int*)malloc(k*sizeof(int));
    
    if( *topPtr!=NULL)
    {
        for(  i=0; i<k; i++)
        {
            *(A+i)=(*topPtr)->data;
            *topPtr=(*topPtr)->next;
        }
        
    }
    
    *topPtr = B;
    (*topPtr)->del(topPtr);
    
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
            *topPtr=push(*topPtr, *(A+l));
        }
    }
    invert(topPtr);
}
stack& stack ::  operator-( stack& A)
{
    int raz;
    stack * C=NULL;
    stack * a=this;
    stack * b=&A;
    while((a)!=NULL && (b)!=NULL)  //  Пока есть следующий элемент в обоих стеках
    {
        raz=a->data - b->data;
        
        
        C=push(C,raz);
        
        a=a->next;
        b=b->next;
        
    }
    
    
    C->invert(&C);
    
    return *C;
}



void instructions()

{
    
    cout<< "----------------------------------------------------------------------------\n"
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
    
    "18 Stack output (Вывод стека)\n"
    
    "19 Adding 1 to all elements (Прибавление 1 ко всем элементам)\n"
    
    "20 the difference between the stacks(Разность стеков)\n"
    
    "21 to end program\n"
    "----------------------------------------------------------------------------\n" ;
    
}

void instructions1()

{
    
    cout<<"----------------------------------------------------------------------------\n"
    "*****STACK №2*****\n"
    "Enter choice:\n"
    
    "1 to push a value on the stack(добавить элемент)\n"
    
    "2 to pop a value off the stack(удалить элемент)\n"
    
    "3 Вывод стека\n"
    
    "4 to change the element to another(замена элемента)\n"
    
    "5 invert(инвертирование)\n"
    
    "6 The length of the stack(длина стека)\n"
    
    "7 Stack removal(удаление стека)\n"
    
    "8 to end program\n"
    "----------------------------------------------------------------------------\n" ;
    
}

void instructions2()

{
    
    cout<<"----------------------------------------------------------------------------\n"
    "*****STACK №3*****\n"
    "Enter choice:\n"
    
    "1 print\n"
    
    "2 The length of the stack(длина стека)\n"
    
    "3 Stack removal(удаление стека)\n"
    
    "4 to copy the stack(копирование стека)\n"
    
    "5 to end program\n"
    "----------------------------------------------------------------------------\n" ;
    
}

void stack::del(stack** A){  //создаем двойной указатель чтоб он хранил адресс
    *A=this;
    stack *m;              //помощник чтоб элементы по очреди удалять
    
    while(*A!=NULL){
        m=*A;
        *A=(*A)->next;           //переходим к следующему элементу
        delete m;                //вызывается деструктор
    }
    
}


//**********************************************************************
stack* stack ::pasteDown(stack *A, int y, int z) {
    stack *elemDo, *elemPos, *top;
    elemPos=A;
    elemDo=A;
    top= A;
    
    if ( top == NULL)
    {
        cout << "Error. Stack is empty.\n";
        return 0;
    }
    
    
    int i,w;
    int l=0;
    
    while(top!=NULL){
        l++;
        top=top->next;
    }
    top=A;
    stack * B;
    B=new stack;
    if (y==l+1){
        
        B->next=A;
        B->data=z;
        A=B;
        cout<<A;
        return A;
        
    }
    //Создаём новую строчку стека//
    
    w=l-y;
    
    if (y<0 || y>l+1 || y==0){
        cout<<endl<<"Incorrect number"<<endl;
        return 0;
        
    }
    
    if (top != NULL)
        
    {
        for (  i=0; i<w; i++)
        {
            
            top =top->next;   // скопировали адрес элемента до которого надо вставить
        }
        
        elemDo=top;
        
        for(  i=0; i<1; i++)
        {
            
            top = top->next;
            
            // скопировали адрес элемента следущего  до которого надо вставить
            
        }
        
        elemPos=top;
        
    } else {
        
        cout<<"Steck is empty"<<endl;
        return 0;
        
    }
    
    if (B != NULL)
        
    {
        
        B->data = z;
        
        B->next = elemPos;
        
        elemDo->next = B;
        
    }
    
    
    else {
        
        cout<<z<<" not inserted. No memory available"<<endl;
    }
    
    top=A;
    cout<<A;
    return 0;
    
}

stack* stack :: pasteUp  (stack *A, int y, int z ){
    
    stack *elemDo, *elemPos, *top;
    elemPos=A;
    elemDo=A;
    top= A;

    
    
    if ( top == NULL)
    {
        cout << "Error. Stack is empty.\n";
        return 0;
    }
    
    int i,w;
    int l=0;
    
    while(top!=NULL){
        l++;
        top=top->next;
    }
    top=A;
    stack * B;
    B=new stack;
    //Создаём новую строчку стека//
    
    w=l-y;
    
    if (y<0 || y>l || y==0){
        cout<<endl<<"Incorrect number"<<endl;
        return 0;
        
    }
    
    if (top != NULL)
        
    {
        for (  i=0; i<w; i++)
        {
            
            top =top->next;   // скопировали адрес элемента до которого надо вставить
        }
        
        elemDo=top;
        
        for(  i=0; i<1; i++)
        {
            
            top = top->next;
            
            // скопировали адрес элемента следущего  до которого надо вставить
            
        }
        
        elemPos=top;
        
    } else {
        
        cout<<"Steck is empty"<<endl;
        return 0;
        
    }
    
    if (B != NULL)
        
    {
        
        B->data = z;
        
        B->next = elemPos;
        
        elemDo->next = B;
        
    }
    
    
    else {
        
        cout<<z<<" not inserted. No memory available"<<endl;
    }
    
    top=A;
    cout<<A;
    return 0;
}

void  stack::  change()  //замена элемента

{   int oldelement,newelement;
    cout<<"Input the old element which you want to be changed: ";
    
    cin>>oldelement;
    
    cout<<"New value:";
    
    cin>>newelement;
    
    stack *m;
    
    m = this;  // привязываем указатель к голове
    
    if (m == NULL)
        
    {
        cout<<"Error. Stack is empty."<<"\n";
        
        return ;
        
    }
    
    while (m->next != NULL) // проходим по стеку
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
        
        return ;
    }
    
    cout<<"The element has been changed"<<"\n";
    
}

int stack:: delete1()
{      int n, w=0;
    
    cout<<"Input the element's number which you waht to be deleted: ";
    cin>>n;
    int lenght=this->dlina();
    
    if (n>lenght)
    {
        cout<<"ERROR, the element with this number doesn't exist!"<<"\n";
        return w;
    }
    
    stack*p=this;
    
    if(lenght-n==0)//если первый элемент первый элемент
        
    {
        w=1; // Для выхода в майн
        
        return w;
    }
    
    for( int i=0;i< lenght-n-1 && p!=0;i++,p=p->next);
    
    stack* r=p->next; //встать на удаляемый элемент, stack *r- вспомогательная переменная
    
    p->next=r->next; //изменить ссылку
    
    cout<<"deleted element: "<<r->data<<"\n";
    
    delete r; //освобождаем под  r
    
    r=p->next; //встаем на следующий на следующий
    
    return 0;
}

//////////////////////
stack& stack::operator++() //перегрузка инкременты
{
    stack *newPtr=this;
    
    while (newPtr!= NULL) {
        (newPtr->data)++;
        newPtr = newPtr->next;
    }
    return *this;
}
////////////////////////

int stack :: dlina()           //длина стека
{
    stack *A=this;             //Создали и передали зачение указателя головы
    int k=0;
    while(A!=NULL)              // пока не дойдем до 0
    {
        k++;                   //счетчик
        A = A ->next;          //переходим к следющему стеку
        
    }
    return k;                     //возвращаем k;
    
}

void stack:: invert(stack** B)
{
    //Необходимые "помощники"
    stack* A=this;
    stack *SAVE=NULL; // Хранение адреса предыдущего элемента
    stack *VR=NULL; // Промежуточное хранение
    int i=1;
    
    while( i!=0)
        
    {
        if(i==1 && (*B)->next!=NULL) // Первое вхождение и следующий элемент не нулевой
            
        {
            VR=(*B)->next; // Хранение адреса на следующий элемент
            
            
            (*B)->next=NULL; // то есть первый элемент становиться последним
            
            SAVE=(*B);
            
            (*B)=VR; //Головой становиться второй элемент стека
            
            i=2; // Чтобы не возвращаться к этому условию
            
        }
        
        
        if(i!=1 && (*B)->next==NULL) // Если не первое вхождение и следующий элемент нулевой
        {
            i=0; // Для выхода
            
            (*B)->next=SAVE; // В ячейку next последней структуры записываем адрес предыдущего элемента
        }
        
        else
            if(i !=1 && (*B)->next!=NULL) // не первое вхождение и следующий элемент не нулевой
                
            {
                i++;
                
                VR=(*B)->next;
                
                
                (*B)->next=SAVE; // В ячейку next этой структуры записываем адрес предыдущего элемента
                
                SAVE=(*B); // Сохраняем адрес нынешней головы
                
                (*B)=VR; // Смещаем голову на следующий элемент
            }
        
        
        if(i==1 && (*B)->next==NULL) //  Если в стеке один элемент
        {
            i=0;
        }
    }
    
    
}

stack& stack::  operator+( stack& A)
{
    int sum;
    stack * C=NULL;
    stack * a=this;
    stack * b=&A;
    while((a)!=NULL && (b)!=NULL)  //  Пока есть следующий элемент в обоих стеках
    {
        sum=a->data + b->data;
        
        
        C=push(C,sum);
        
        a=a->next;
        b=b->next;
        
    }
    
    
    C->invert(&C);
    
    return *C;
}

stack::stack(const stack &B)//конструктор копии
{
    
    stack *l;
    
    if (l != NULL)
        
    {
        
        data = B.data;
        
        next = B.next;
        
    }
    
}

stack & stack ::operator=( stack* C) //перегрузка равно
{
    
    stack *A=this;
    
    stack *m, *l;
    
    stack *Pos;
    
    m = this;
    
    int k;
    
    k=A->dlina();
    
    int w=0;
    
    while (m->next != NULL && l->next != NULL)
        
    {
        
        m->data = l->data;
        
        m = m->next;
        
        l = l->next;
        
    }
    
    m->data = l->data;
    
    for (int i=0; i<k; i++)
        
    {
        
        if (w ==0)
            
        {
            
            stack *J;
            
            J=new stack(A->data);
            
            C=J;
            
            Pos = J;
            
            A=A->next;
            
            w++;
            
        }
        
        else
            
        {
            
            stack *J;
            
            J=new stack(A->data);
            
            (*Pos).next = J;
            
            Pos = J;
            
            A=A->next;
            
        }
        
    }
    
    return *this;
    
}
//********************************Слитите стеков********************************
stack * stack :: operator*(stack * B)  //Передали два стека*
{
    stack *A=this;
    int i=0;                           //Индикатор первого элемента
    stack *Y=NULL;                     //Посредник создания
    stack *C=NULL;                     //Создали стек для результата слития
    
    if(A!=NULL)                        //Проверка на пустоту
    {
        while(A!=NULL)                 //Доходим до конца
        {
            if(i==0)                   //Создание головы при выполнении условия
            {
                i++;
                C=(*Y).revin(A->data);
                Y=C;
                A=A->next;
            }
            
            else                       //Работа с рядовыми элементами
            {
                Y=(*Y).revin(A->data);
                A=A->next;
            }
            
        }
    }
    
    if(B!=NULL)                       //Проверка на пустоту
    {
        while(B!=NULL)                 //Проверка на пустоту
        {
            if(i==0)                   //Создание головы при выполнении условия
            {
                i++;
                C=(*Y).revin(B->data);
                Y=C;
                B=B->next;
            }
            else                       //Работа с рядовыми элементами
            {
                Y=(*Y).revin(B->data);
                B=B->next;
            }
        }
        
    }
    
    return C;                       //Возвращаем указ. на результат
    
}

stack* stack :: revin(int x)            //Ввод наоборот
{
    stack *Q=this;
    stack *T;
    
    if(Q==NULL)                          //Создание головы
    {
        T=new stack(x,NULL);
    }
    
    else                             //Если "рядовой" элемент
    {
        T=new stack(x,NULL);
        
        Q->next=T;               //Переходы в стеке
    }
    
    return T;                            //Возврашаем указатель на последний элемент
}
//**********************************Конец***************************************



stack* push(stack* a, int x)   //перегрузка оператора ввода
{
    stack * B;
    B=new stack(x,a);
    return B;
}


int isEmpty(stack* topPtr)
{
    return topPtr == NULL;
}



//**************************Удаление по значению********************************

stack* stack :: ZnUd( )
{
    stack *A=this;                      //Создали и передали зачение указателя головы
    int i, ind=0;                       //Индикатор "головы"
    stack *Nast=NULL, *Proshloe=NULL;   //Для работы с предшествующим, нынешним указ. элемента
    
    Nast=A;                             //Передали значение для работы со стеком
    
    cout<<"Введите значение эл-та: ";   //Ввод значения для удаления
    cin>>i;
    
    while(!isEmpty(Nast))              //До конца стека
    {
        if(ind==0)                      //Поиск нашей головы
        {
            if(Nast->data==i)           //Замена головы при необходимости
            {
                stack *R;               //Для удаления
                A=Nast->next;           //Поменяли голову
                R=Nast;
                Nast=Nast->next;
                delete R;
            }
            else                  //При выполнении этого условия - голова найдена
            {
                ind++;              //Сигнал - голова найдена
                Proshloe=Nast;     //Сохранили значение
                Nast=Nast->next; //Перешли на след. элемент
            }
        }
        
        else                            //Работа с элементами "не голова"
        {
            if(Nast->data==i)           //Совпадение значения
            {
                Proshloe->next = Nast->next;     //Перешагнули элемент
                stack *R;                        //Для удаления
                R=Nast;                        //Присвоение для удаления
                Nast=Nast->next;            //Перешли на след. элемент
                delete R;                   //Удалили наш элемент
            }
            else                                 //Элементы, которые должны остаться
            {
                Proshloe=Nast;                   //Поменяли зачение
                Nast=Nast->next;                 //Поменяли зачение
            }
            
        }
        
    }
    return A;                 //Вернули голову
    
}
//*********************************Конец****************************************









#endif /* STACK_READY_hpp */
