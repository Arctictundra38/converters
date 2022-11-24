#include<stdio.h>
/*Le code convertit un nombre en décimal entre 0 et 255 en binaire*/

int myPow(int x,int n);

int main(){
/*Valeur en entrée à convertir*/
int val=0;


//Entrer la valeur en décimal à convertir
printf("Entrer la valeur en décimal\n");
scanf("%d",&val);
printf("La valeur entrée est : %d\n",val);

char binary_result[8]={0,0,0,0,0,0,0,0};

int test =0;
int ind=0;
int inter=0;

/*Algoritme*/

/*Variable de boucle*/
int k=0;
//Initialisation de ind(l'indice)
while( k<=8){
	test=val-myPow(2,k);
	if(test<0){
		ind=k-1; break;
	}
	k++;
}

while(inter>=0){
	inter=val%myPow(2,ind);
	val=inter;
	if(inter!=0){
		binary_result[ind]=1;
	}
	if(inter==0){
		binary_result[ind]=1;
		break;
	}
	while( k<=8){
		test=val-myPow(2,k);
		if(test<0){
			ind=k-1; break;
		}
		k++;
	}
/*On réinitialise k dans le deuxième while pour la prochaine itération*/
k=0;

}


/*Afficher la valeur en binaire de gauche à droite*/
for(int j=7;j>=0;j--){

	printf("%d",binary_result[j]);
}

return 0;
}


int myPow(int x,int n)
{
    int i; /* Variable used in loop counter */
    int number = 1;

    for (i = 0; i < n; ++i)
        number *= x;

    return(number);
}
