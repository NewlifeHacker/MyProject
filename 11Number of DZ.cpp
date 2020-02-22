//
//  11Number of DZ.cpp
//  2Semestr
//
//  Created by Алексей Крутов on 09/05/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include "11Number of DZ.hpp"

int main(){
    int k=1;
    while (k!=0){
        int choice = 0;
        int choice2 =0;
        int choice3 = 0;
    
        cout<<"С каким типом фигуры вы хотите работать? "<< endl;
        cout<<"Нажмите 1 для работы с Шаром "<< endl;
        cout<<"Нажмите 2 для работы с Конусом "<< endl;
        cout<<"Нажмите 3 для работы с Пирамидой "<< endl;
        cout<<"Нажмите 0 для выхода из программы "<< endl;
        cin>>choice;
        cout<<""<<endl;
       
        
        
        switch (choice) {
            case 1:{
                ball A;
                cout<<"Хотите задать парметры фигуры самостоятельно или рандомно?"<<endl;
                cout<<"нажмите 1 чтобы заполнить рандомно"<<endl;
                cout<<"нажмите 2 чтобы заполнить самостоятельно"<<endl;
                cout<<""<<endl;

                cin>>choice2;
                if (choice2 ==1){
                    A.randd();
                    
                }
                if (choice2==2){
                    A.seter();
                }
                
                cout<<"Выбирите, что хотите запросить"<<endl;
                cout<<"нажмите 1 чтобы получить объем"<<endl;
                cout<<"нажмите 2 чтобы получить площадь поверхности"<<endl;
                cout<<"нажмите 3 чтобы получить оба ответа"<<endl;
                cout<<""<<endl;

                cin>>choice3;
                if(choice3==1){
                    A.V();
                }
                if(choice3==2){
                    A.SP();
                }
                if(choice3==3){
                    A.V();
                    A.SP();
                }
                break;
            }
            case 2:{
                cone A;
                cout<<"Хотите задать парметры фигуры самостоятельно или рандомно?"<<endl;
                cout<<"нажмите 1 чтобы заполнить рандомно"<<endl;
                cout<<"нажмите 2 чтобы заполнить самостоятельно"<<endl;
                cout<<""<<endl;

                cin>>choice2;
                if (choice2 ==1){
                    A.randd();
                    
                }
                if (choice2==2){
                    A.seter();
                }
                cout<<"Выбирите, что хотите запросить"<<endl;
                cout<<"нажмите 1 чтобы получить объем"<<endl;
                cout<<"нажмите 2 чтобы получить площадь поверхности"<<endl;
                cout<<"нажмите 3 чтобы получить оба ответа"<<endl;
                cout<<""<<endl;

                cin>>choice3;
                if(choice3==1){
                    A.V();
                }
                if(choice3==2){
                    A.SP();
                }
                if(choice3==3){
                    A.V();
                    A.SP();
                }
                break;
                
            }
            case 3:{
                pyramid A;
                cout<<"Хотите задать парметры фигуры самостоятельно или рандомно?"<<endl;
                cout<<"нажмите 1 чтобы заполнить рандомно"<<endl;
                cout<<"нажмите 2 чтобы заполнить самостоятельно"<<endl;
                cout<<""<<endl;

                cin>>choice2;
                if (choice2 ==1){
                    A.randd();
                    
                }
                if (choice2==2){
                    A.seter();
                }
                cout<<"Выбирите, что хотите запросить"<<endl;
                cout<<"нажмите 1 чтобы получить объем"<<endl;
                cout<<"нажмите 2 чтобы получить площадь поверхности"<<endl;
                cout<<"нажмите 3 чтобы получить оба ответа"<<endl;
                cout<<""<<endl;

                cin>>choice3;
                if(choice3==1){
                    A.V();
                }
                if(choice3==2){
                    A.SP();
                }
                if(choice3==3){
                    A.V();
                    A.SP();
                }
                
                break;
            }
                
            case 0:{
                exit(0);
                break;
            }

        }
        
   
        
        cout<<"Если хотите запустить программу еще раз нажмите 1, иначе 0"<<endl;
        cin>>k;
    }
   
    
} 
