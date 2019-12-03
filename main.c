#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Variaveis Declaradas
	int voto[4] ={0,0,0,0};
	char candidato[4][100] ={"Caitlyn [12345]","Brand [23456]","Ezreal [34567]","Riven [45678]"},aux1[4][100];
	float por[4] = {0,0,0,0},aux2;
	int op,i,j,x ,n = 0,aux,c;
	
	//Pede o Numero de pessoas que irão votar
	printf("Quantas pessoas irao votar: ");
	scanf("%d",&n);
	
	//Mostra os detalhes dos candidatos
for (x = 0 ; x < n; x ++){
	printf("\n==========================\n");
	printf("Informe o numero do candidato");
	printf("\n==========================\n");
	
	printf("\n==========================\n");
		printf("\nNumero: 12345\nNome: Caitly n\nApelido: cait \nIdade: 25 anos\nSetor: ad carry \nTempo de Servico: 8");
		printf("\n==========================\n");
	
	printf("\n==========================\n");
		printf("\nNumero: 23456\nNome: Kegan Rodhe \nApelido: brand \nIdade: 30 anos\nSetor: Suporte \nTempo de Servico: 9");
		printf("\n==========================\n");
	
	printf("\n==========================\n");
		printf("\nNumero: 34567\nNome: Ezreal\nApelido: ez \nIdade: 20 anos\nSetor: Ad carry \nTempo de Servico: 9 ");
		printf("\n==========================\n");
	

		printf("\n==========================\n");
		printf("\nNumero: 45678\nNome: Riven \nApelido: mestra das espadas\nIdade: 25 anos\nSetor: Top Lane \nTempo de Servico: 9");
		printf("\n==========================\n");
	printf("\n Qual e a sua opcao: \n");
	scanf("%d",&op);

	
	
	//estrutura de decisão
	if(op == 12345){
		voto[0] = voto[0]+1;
		
		
		printf("\nDetalhes do candidato\n");
		printf("\n==========================\n");
		printf("\nNumero: 12345\nNome: Caitly n\nApelido: cait \nIdade: 25 anos\nSetor: ad carry \nTempo de Servico: 8");
		printf("\n==========================\n");
		system("pause");
		system("cls");

	}
	if(op == 23456){
		voto[1]  =voto[1]+1;
		
		printf("\nDetalhes do candidato\n");
		printf("\n==========================\n");
		printf("\nNumero: 23456\nNome: Kegan Rodhe \nApelido: brand \nIdade: 30 anos\nSetor: Suporte \nTempo de Servico: 9");
		printf("\n==========================\n");
		system("pause");
		system("cls");
	}
	if(op == 34567){
		voto[2]  =voto[2]+1;
		
		printf("\nDetalhes do candidato\n");
		
		printf("\n==========================\n");
		printf("\nNumero: 34567\nNome: Ezreal\nApelido: ez \nIdade: 20 anos\nSetor: Ad carry \nTempo de Servico: 9 ");
		printf("\n==========================\n");
		system("pause");
		system("cls");
	}	
	if(op == 45678){
		voto[3] = voto[3]+1;
		
		printf("\nDetalhes do candidato\n");
		printf("\n==========================\n");
		printf("\nNumero: 45678\nNome: Riven \nApelido: mestra das espadas\nIdade: 25 anos\nSetor: Top Lane \nTempo de Servico: 9");
		printf("\n==========================\n");	
	}	
}
	//Coloca os Votos e Candidatos (Decrescente)
	for(j=1;j<4;j++){
		for(i=0;i<4;i++){
			//Voto
	       if(voto[i]<voto[j]){
	          aux=voto[i];
	          voto[i]=voto[j];
	          voto[j]=aux;
	          //Candidato
	          strncpy(aux1 , candidato[i],100);
	          strncpy(candidato[i] ,candidato[j],100);
	          strncpy(candidato[j] ,aux1,100);
	       }	
	   }
	   
	}
	//Faz o calculo da porcentagem dos votos de cada candidato 
	for(c =0 ; c < 4; c ++){
		 		por[c] = (voto[c] * 100)/n;
			}
	//Mostra Resultados na tela (Candidato -- Voto -- Porcentagem)
	for(i=0;i<4;i++){	
			printf("\nCandidato: %s\n Numero de votos: %d\nPorcentagem: %.0f \n",candidato[i],voto[i],por[i]);

		}

	  return 0;

	}


         
