//
//  Class array+ sort.cpp
//  2Semestr
//
//  Created by Алексей Крутов on 04/05/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include "Class array+ sort.hpp"
#include "Class array+ sort1.hpp"
int main(){
    
    int N;
    cout<<"Введите количество объектов класса"<<endl;
    cin>>N;
    cout<<"Будем заполнять рандомно? Если да- нажмите 1, иначе 0"<<endl;
    int h=0;
    cin>>h;
    train* arr = new train[N];
    if (h==1){
        for (int i=0; i<N; i++){
            arr[i].randd();
        }
        
    }else {
        for (int i=0; i<N; i++){
            arr[i].input();
        }
    }
    sort(arr, N);// по возрастанию
    
    
    cout<<"Сколько объектов класса вывести на экран?"<<endl;
    int n;
    cin>>n;
    
    for (int i=0; i<N; i++){
        if (N==0){
            return 0;
        }
        else{ arr[i].get_train(); }
        cout<<"\n";
    }
    sort(arr, N, 2);//по убыванию
    for (int i=0; i<N; i++){
        if (N==0){
            return 0;
        }
        else{ arr[i].get_train(); }
        cout<<"\n";
    }
    delete [] arr;
}
