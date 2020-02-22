//
//  function paste.c
//  2Semestr
//
//  Created by Алексей Крутов on 09/04/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <stdio.h>


newPtr = malloc(sizeof(STACK));    //Создаём новую строчку стека//




void pasteUp (UKAZ *topPtr, int n, int info) {
    
    UKAZ newPtr;
    UKAZ *elemDo, *elemPos;
    
    newPtr = malloc(sizeof(STACK));    //Создаём новую строчку стека//
    
    
    while (topPtr != NULL)
        
    {
        for( int i=0; i<n; i++){
        
      elemDo = topPtr->next;
            
      // скопировали адрес элемента до которого надо вставить
            
        }
        for( int i=0; i<=n; i++){
            
            elemPos = topPtr->next;
            
            // скопировали адрес элемента следущего  до которого надо вставить
            
        }
    }
    
    if (newPtr != NULL)
        
    {
        
        newPtr->data = info;
        
        newPtr->next = *elemPos;
        
        *elemDo = newPtr;
        
    }
    
    
    else
        
        printf("%d not inserted. No memory available.\n", info);
    
}
    
}
