//
//  nasty.cpp
//  Praktise
//
//  Created by Алексей Крутов on 15/09/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
#include <iostream>

#include <vector>

#include <stdlib.h>

using namespace std;

struct Vopros

{
    
    int razdel;
    
    string slozhnosti;
    
    std::string text;
    
};

struct Bilet

{
    
    int N;
    
    vector<Vopros> V;
    
};

void Menu()

{
    
    cout << " Меню" << endl;
    
    cout << " ********************" << endl;
    
    cout << "1-Добавить вопрос в базу вопросов" << endl;
    
    cout << "2-Вывести базу вопросов" << endl;
    
    cout << "3-Отредактировать вопрос" << endl;
    
    cout << "4-Сгенерировать билет" << endl;
    
    cout << "5-Сохранить базу в файл" << endl;
    
    cout << "6-Считать базу из файла" << endl;
    
    cout << "0-Выйти из программы" << endl;
    
    cout << " ********************" << endl;
    
    return;
    
};

Vopros inputVopros()

{
    
    setlocale(LC_ALL, "");
    
    Vopros Zadanie;
    
    cout << "Введите раздел дисциплины: ";
    
    cin >> Zadanie.razdel;
    
    cin.get();
    
    cout << "Введите сложность: ";
    
    cin >> Zadanie.slozhnosti;
    
    cin.get();
    
    cout << "Введите Вопрос: ";
    
    cin >> Zadanie.text;
    
    cin.get();
    
    return Zadanie;
    
};

int main()

{
    
    setlocale(LC_ALL, "rus");
    
    vector<Vopros>Zadanie;
    
    Menu();
    
    int k;
    
    cin >> k;
    
    switch (k)
    
    {
            
        case 1:
            
        Zadanie.push_back(inputVopros());
            
            main();
            
           break;
            
        case 2:
            
            for (vector<Vopros>::iterator it = Zadanie.begin(); it != Zadanie.end(); it++){
                
                
                cout << " ********************" << endl;
                
                cout << "Раздел: " <<it->razdel << endl;
                
                cout << "Сложность: " << it->slozhnosti << endl;
                
                cout << "Текст: " << it->text << endl;
            
                
                main();
            }
                
            break;
            
            /*   case 3:
            
        
            
            int t;
            
            cout << "Введите номер вопроса для просмотра" << endl;
            
            cin >> t;
            
            if (t <= Zadanie.end()) {
                
            cout << " ********************" << endl;
            
            cout << "Раздел: " << Zadanie[t].razdel << endl;
            
            cout << "Сложность: " << Zadanie[t].slozhnosti << endl;
            
            cout << "Текст: " << Zadanie[t].text << endl;
            
            main();
            }
            
        break;
            */
       // case 0:
            
        
            
         //   exit(0);
            
       // break;
            
        default:
            
        
            
            cout << "Ошибка, введите цифру от 0 до 6 еще раз" << endl;
            
            main();
            break;
        }
            
    }
    

