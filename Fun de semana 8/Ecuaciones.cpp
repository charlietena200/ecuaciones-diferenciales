#include  <stdio.h>
#include <math.h>
 
int main ()
{
	printf("\n Ecuacion lineal homogenea: ");
	
	printf("\n Decimos que una funcion es homogena de grado n si f: R^2 a R, entonces:\n");
	printf("f(tx,ty) = t^n  f(x,y)  para todo t>0 ");
	printf("\n Una ecuacion lineal an(x)y^n + ..... + a0(x)y = g(x)  es homogenea si g(x)=0\n si g(x) diferente de 0, entonces es no homogenea.\n");
	printf("\n Por lo que podemos decir que una ecuacion lineal es cuando todas sus partes dependen de minimo una variable \n");
	
	//Aqui pedimos la ecuacióndel usuario
	printf("\n\n Introduce el maximo valor de la derivada 'y' : ");
	int d=0;
	scanf("%d",&d);
	float vec[d];
	printf("\n\n Ingresa la ecuacion\n ");
	for(int i=0; i<d ;i++){
		printf("\n y");{
			for(int i2=0; i2<i; i2++){
				printf("'");
			}
		}
		printf(" * ");
		scanf("%f",&vec[i]);
	}
	printf("\n La ecuacion que ingresaste es de grado %d: \n",d);
	for(int i=0; i<=d ;i++){
		printf(" %f y",vec[i]);{
			for(int i2=0; i2<i; i2++){
				printf("'");
			}
		printf(" + ");
		}
		
	}
	printf("\n El lado 'derecho' de la igualdad contiene alguna variable?   si:1  no:2 ");
	int igual=0;
	float g;
	scanf("%d",&igual);
	if(igual==1){
		printf("\n NO es homogenea ");
	}
	if(igual==2){
		printf("\n E homogenea\n Ingresa el valor de la igualdad: ");
		scanf("%f",&g);
	
	printf("\n La ecuacion que ingresaste es de grado %d: \n",d);
	for(int i=0; i<=d ;i++){
		printf(" %f y",vec[i]);{
			for(int i2=0; i2<i; i2++){
				printf("'");
			}
		printf(" + ");
		}
		}
		printf("= %f",g);}
}

