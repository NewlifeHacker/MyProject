//
//  anY bay.cpp
//  2Semestr
//
//  Created by Алексей Крутов on 15/05/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include "anY bay.hpp"
#include <iostream>


int main()
{
    int n;
    cout << "Введите количество объектов класса" <<endl;
    cin >> n ;
    sphera *A = new sphera[n];
    for (int i =0; i<n; i++)
    {
        A[i].setsphera();
    }
    for (int i =0; i<n; i++)
    {
        A[i].getsphera();
    }
    cout << endl;
    sort (A, n);
    for (int i =0; i<n; i++)
    {
        A[i].getsphera();
    }
    delete[] A;
    return 0;
}
