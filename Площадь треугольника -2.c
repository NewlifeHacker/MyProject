//
//  Площадь треугольника -2.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 29/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main()
{
    float a_1, b_1, c_1, a_2, b_2, c_2, a_3, b_3, c_3;
    float p,l_3,l_2,l_1,x_1,x_2,x_3,y_1,y_2,y_3,s;
scanf("%f %f %f %f %f %f %f %f %f",&a_1, &b_1, &c_1, &a_2, &b_2, &c_2, &a_3, &b_3, &c_3);
    
    x_1=((c_2*b_1 - c_1*b_2)/(a_2*b_1 - a_1*b_2));
    y_1=(c_1 - a_1*x_1)/b_1;
    
    //printf("%.3f %.3f \n",x_1, y_1);
    
    x_2=(c_3*b_1 - c_1*b_3)/(a_3*b_1 - a_1*b_3);
    y_2=(c_1 - a_1*x_2)/b_1;
    
    //printf("%.3f %.3f \n",x_2, y_2);
    
    x_3=(c_3*b_2 - c_2*b_3)/(b_2*a_3 - a_2*b_3);
    y_3=(c_2 - a_2*x_3)/b_2;
    //printf("%.3f %.3f \n",x_3, y_3);
    
    l_1= sqrt((x_2-x_1)*(x_2-x_1) + (y_2 - y_1)*(y_2 - y_1));
    l_2= sqrt((x_3-x_2)*(x_3-x_2) + (y_3 - y_2)*(y_3 - y_2));
    l_3= sqrt((x_3-x_1)*(x_3-x_1) + (y_3 - y_1)*(y_3 - y_1));
    
    p=(l_1 + l_2 + l_3)/2;
    
    s=sqrt(p * (p-l_1) * (p-l_2) * (p-l_3));
    
    printf("%.3f \n",s);
 
    
    
}
