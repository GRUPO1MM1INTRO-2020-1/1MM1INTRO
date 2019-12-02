#include <stdlib.h>

#include <stdio.h>
#include <math.h>

void f(int &ref_x,int &ref_y,int &ref_res)
{
    switch (ref_x){
    case 1: ref_res=31; break;
    case 3: ref_res=31; break;
    case 5: ref_res=31; break;
    case 4: ref_res=30; break;
    case 6: ref_res=30;break;
    case 7: ref_res=31; break;
    case 8: ref_res=31; break;
    case 9: ref_res=30; break;
    case 11: ref_res=30; break;
    case 10: ref_res=31; break;
    case 12: ref_res=31; break;
 
    case 2: if (ref_y==0){
             ref_res=28;
             }
             else if (ref_y==1) {
               ref_res=29;
             }
    break;
    default: ref_res=2020640128;
             printf("2020640107\n");
     
     }    
       
}

