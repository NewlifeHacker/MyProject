//
//  Домашнее задание.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 24/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

/*int positive_sum (int n, int arr[n])  //Не работало через функцию
{
    int sum;
    sum=0;
    for(int i=0; i<n; i++)
    {
        if (arr[i]>=0)
        {
            sum=sum+arr[i];
        }
        
    }
    return sum;
}
*/
/*int max_min_elements(int n, int arr[n])
{
    int imax, max=0;
    int imin, min=0;
    for (int i=0; i<n; i++)
    {      if (arr[i]>=max)
        {
        
        }
        
    }
}
*/



int main(){
    int n, op, min, max, imax,imin,sm;
    max=0;
    min=0;
    op=1;
    imin=0;
    imax=0;
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0; i<n; i++) //input elements
    {
        scanf("%d",&arr[i]);
    }
   
    
    int sum=0;
    
    for(int i=0; i<n; i++)
    {
        if (arr[i]>=0)
        {
            sum=sum+arr[i];
        }
        
    }
    
    for (int i=0; i<n; i++)
    {      if (arr[i]>=max)
            { max=arr[i];
                imax=i;
            } else if(arr[i]<=min){
                min=arr[i];
                imin=i;
            }
        
    }
    
    if (imax>imin)
    {
        
        for (int i=imin+1; i<imax; i++ )
        {
            op=op*arr[i];
        }
        }else if(imin>imax)
        {
            for(int i=imax+1; i<imin; i++)
            {
                 op=op*arr[i];
            }
        }
    
    
    
    
    printf("%d %d", sum, op );
    
}
