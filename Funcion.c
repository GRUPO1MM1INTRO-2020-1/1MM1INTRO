void f(int &x,int &y,int &r)
{
    switch (x){
    case 1: r=31; 
	break;
    case 3: r=31; 
	break;
    case 5: r=31; 
	break;
    
    case 4: r=30; 
	break;
    case 6: r=30;
	break;
    
    case 7: r=31; 
	break;
    case 8: r=31; 
	break;
    
    case 9: r=30; 
	break;
    case 11: r=30;
	 break;
    
    case 10: r=31; 
	break;
    case 12: r=31; 
	break;
    
    case 2: if (y==0){
             r=28;
             }
             else if (y==1) {
               r=29;
             }
    break;
    default: 
             printf("Valor no valido\n");
     
     }    
       
}
