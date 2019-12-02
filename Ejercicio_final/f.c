\*funcion f*\
int f(int x, int y){
	if ((x<=6)&&(x>=1)&&((x%2)!=0)){
		a=31;}
	else if ((x<=6)&&(x>=1)&&((x%2)==0)&&(x!=2)){
		a=30;}
	else if ((x>=7)&&(x<=8)){
		a=31;}
	else if ((x>=9)&&(x<=12)&&((x%2)=0)){
		a=30;}
	else if ((x>=9)&&(x<=12)&&((x%2)==0)){
		a=31;}
	else if ((x==2)&&(y==0)){
		a=28;}
	else if ((x==2)&&(y==1)){
		a=29;}
	else{
		printf("Error de entrada de valores");}
	return a;
}//End f
