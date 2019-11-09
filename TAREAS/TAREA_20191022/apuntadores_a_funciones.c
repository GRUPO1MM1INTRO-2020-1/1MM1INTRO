//apuntador_a_funciones.c
#include <stdio.h>
#include <stdlib.h>

void solido(float Wl,float Ws,float Wo){
        float WT,Sol;
        if(Ws>Wl){
                WT=Ws-Wl;
                Sol=((Wo-Wl)/WT)*100;
		if(Wo<Wl){	Sol=Sol*(-1);
                 }
	}
        else if(Ws<Wl){
                WT=Wl-Ws;
                Sol=((Wo-Wl)/WT)*100;
		if(Wo<Wl){	Sol=Sol*(-1);
                 }
	}
        printf("El porcentaje en sólido es: 	%2f%\n", Sol);
}//End solido

void liquido(float Wl,float Ws,float Wo){
        float WT,Liq;
        if(Ws>Wl){
                WT=Ws-Wl;
                Liq=((Wo-Ws)/WT)*100;
		if(Wo<Ws){	Liq=Liq*(-1);
                 }
	}
        else if(Ws<Wl){
                WT=Wl-Ws;
                Liq=((Wo-Ws)/WT)*100;
	if(Wo<Ws){	Liq=Liq*(-1);
                 }
        }
        printf("El porcentaje en líquido es: 	%2f%\n", Liq);
}//End liquido
int main(){
        float L,S,O;
//        float *J,*K;
	void (*J)(float,float,float);
	void (*K)(float,float,float);
        printf("Este programa calcula el porcentaje de sólido y líquido de un elemento en una aleación, por medio\n de la regla de la palanca; Necesita tres datos de entrada\n");
        printf("Ingresa tu valor Wl\n");
        scanf("%f",&L);
        printf("Ingresa tu valor Ws\n");
        scanf("%f",&S);
        printf("Ingresa tu valor Wo\n");
        scanf("%f",&O);
	J=&solido;
        J(L,S,O);
        K=&liquido;
        K(L,S,O);
        return 0;
}
