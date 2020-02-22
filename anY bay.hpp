//
//  anY bay.hpp
//  2Semestr
//
//  Created by Алексей Крутов on 15/05/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#ifndef anY_bay_hpp
#define anY_bay_hpp

#include <stdio.h>
#include <iostream>

using namespace std;
class sphera {
  
private:
    int x;
    int y;
    int z;
    int R;
public:
    sphera ()
    {
        x = 0;
        y = 0;
        z = 0;
        R = 1;
    }
    void setsphera();
    
    void getsphera();
    friend void sort (sphera *arr, int n) { //по возрастанию
        
        for (int i=0; i<n-1; ++i){
            for (int j=0; j<n-1; ++j){
                if(arr[j+1].R < arr[j].R){
                    sphera temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

};
using namespace std;


void sphera :: setsphera()
{
    cout << "Введите координаты центра: ";
    cin >> x >> y >> z;
    cout << "Введите радиус: ";
    cin >> R;
    if (R <= 0)
    { cout << "Error";}
}
void sphera:: getsphera()
{
    cout << endl<< "Вы ввели:" << endl<< "Радиус "<< R << endl<< "Координаты центра"<< endl<<x<< endl<<y<< endl<<z<<endl;
}

#endif /* anY_bay_hpp */
