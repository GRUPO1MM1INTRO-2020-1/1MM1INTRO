#include <stdio.h>
int f(int X, int Y){
	int res;
	
	if ( X==2 ){
			if(Y==0)
			res=28;
			else if(Y==1)
			res=29;
			else
			res=30;
		}
	else if((X>=0)&&(X<=6)){
		if ( X%2==0 )
		res=30;
    	else
		res=31;
	}
	else if((X>=7)&&(X<=8)){
		res=31;
	}
	else if((X>=9)&&(X<=12)){
		if ( X%2==0 )
		res=31;
    	else
		res=30;
	}
	else{
		//Fecha de nacimiento de Linus Torvalds
		//28 de Diciembre de 1969
		res=28121969;
	}
	return res;
}
