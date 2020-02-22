//
//  PUSH_AFTER_BEFORE_For_KURSOVAYA.cpp
//  2Semestr
//
//  Created by Алексей Крутов on 28/05/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//
stack* pasteDown(stack *A, int y, int z) {
    
    stack *m, *n;
    m = n = A;
    if (m == NULL)
    {
        cout << "Error. Stack is empty.\n";
        return 0;
    }
    if (m->data == y)
    {
        if ((n->next) == NULL)
        {
            m->next = new stack;
            (m->next)-> data = z;
            (m->next)->next = NULL;
        }
        else
        {
            stack *k = n->next;
            m->next = new stack;
            (m->next)->data = z;
            (m->next)->next = k;
        }
        return 0;
    }
    while (m->data != y)
    {
        if (m->next == NULL)
        {
            cout << "Element not found!\n";
            return 0;
        }
        m = m->next;
        n = m->next;
    }
    m->next = new stack;
    (m->next)->data = z;
    (m->next)->next = n;
    A=n;
}

stack* pasteUp  (stack *A, int y, int z ){
    
    stack *m, *n;
    m = n = A;
    if (m == NULL)
    {
        cout << "Error. Stack is empty.\n";
        return 0;
    }
    if (m->data == y) {
        stack * B;
        int ll;
        
        B=new stack(z,m);
        return 0;
    }
    while (m->data != y)
    {
        if (m->next == NULL)
        {
            cout << "Element not found!\n";
            return 0;;
        }
        n = m;
        m = m->next;
    }
    n->next = new stack;
    (n->next)->data = z;
    (n->next)->next = m;
    A=m;
    return A;
    return 0;
    
}





case 13: //Вставить элемент до
Z_1:
cout<< "Ведите номер элемента до которого хотите вставить ";
int a_1;
cin>>a_1;
if (a_1<=0){
    cout<<"Вы ввели значение которого не существует, попробуйте снова";
    goto Z_1;
    }
    
    cout<<"Введите значение, которое хотите записать в новый элемент стека";
    int a_2;
    cin>>a_2;
    pasteUp(A,a_1,a_2);
    cout<< A;
    
    break;
    
    /**********************************************************************************/
    
case 14://Вставка после
Z_2:
    cout<< "Ведите номер элемента после которого хотите вставить ";
    int a_3;
    cin>>a_3;
    if (a_3<=0){
        cout<<"Вы ввели значение которого не существует, попробуйте снова";
        goto Z_2;
    }
    
    cout<<"Введите значение, которое хотите записать в новый элемент стека";
    int a_4;
    cin>>a_4;
    pasteDown(A,a_3,a_4);
    cout << A;
    
    
    
    break;
    
    
    
    
    friend stack* pasteDown  (stack * , int , int );//Вставка элемента после
    friend stack* pasteUp  (stack * , int , int );//Вставка элемента до


    stack* pasteUp  (stack *A, int y, int z ){
        
        stack *m, *n;
        m = n = A;
        
        if (y==1){
            
            
            
        }
        
        if (m == NULL)
        {
            cout << "Error. Stack is empty.\n";
            return 0;
        }
        
        int k=0;
        for (k; k<y; k++){
            if (m->next == NULL)
            {
                cout << "Element not found!\n";
                return 0;
            }else{
                k++;
                n = m;
                m = m->next;}
        }
        
        n->next = new stack;
        (n->next)->data = z;
        (n->next)->next = m;



        stack* pasteUp  (stack *A, int y, int z ){
            
            stack *m, *n;
            m = n = A;
            
            if (y==1){
                
                stack * B,*hh;
                hh=B;
                
                B=new stack(z,m);
                A=hh;
                cout<<B;
                return A;
                
                
            }
            
            if (m == NULL)
            {
                cout << "Error. Stack is empty.\n";
                return 0;
            }
            
            int k=0;
            for (k; k<y; k++){
                if (m->next == NULL)
                {
                    cout << "Element not found!\n";
                    return 0;
                }else{
                    k++;
                    n = m;
                    m = m->next;}
            }
            
            n->next = new stack;
            (n->next)->data = z;
            (n->next)->next = m;
            cout<<A;
            return A;
            
            
        }
        
        stack* pasteDown(stack *A, int y, int z) {
            
            stack *m, *n;
            m = n = A;
            if (m == NULL)
            {
                cout << "Error. Stack is empty.\n";
                return 0;
            }
            int k=0;
            
            for (k; k<y; k++){
                if (m->next == NULL)
                {
                    m->next = new stack;
                    (m->next)-> data = z;
                    (m->next)->next = NULL;
                    return 0;
                    
                }else{
                    k++;
                    n = m->next;
                    m = m->next;
                    
                }
            }
            stack *j = n->next;
            m->next = new stack;
            (m->next)->data = z;
            (m->next)->next = j;
            //   n->next = new stack;
            // (m->next)->data = z;
            // (m->next)->next = n;
            cout<<A;
            return A;
            
        }

        stack* pasteUp  (stack *A, int y, int z ){
            
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
                cout<<"Incorrect number"<<endl;
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
        }




///окончательный
        stack* pasteDown(stack *A, int y, int z) {
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
                cout<<"Incorrect number"<<endl;
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
        }
        
        stack* pasteUp  (stack *A, int y, int z ){
            
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
                cout<<"Incorrect number"<<endl;
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
        }
        
