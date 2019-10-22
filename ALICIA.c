#include <stdio.h>
#include <stdlib.h>

int main(){
  int M,N;
  int *puertas, *llaves, *open;
  scanf("%d",&M);
  puertas = (int *) malloc (M*sizeof(char));
  for(int i=0;i<M;i++){
  scanf("%d",&puertas[i]);
  }
  
  scanf("%d",&N);
  
  llaves = (int *) malloc (N*sizeof(char));
  open = (int *) malloc (N*sizeof(char));
  
  for(int i=0;i<N;i++){
  printf("Tamaño de llave %d: ",i+1);
  scanf("%d",&llaves[i]);
  }
  
  open[0]=0;
  for(int i=0;i<N;i++){
  	for(int j=0;j<M;j++){
  		if(llaves[i]==puertas[j]){
  			printf("%d ",j+1);
  			open[i] ++;
		  }
		}
	if(open[i]==0){
		printf("0 ");
	}
	}
	
  
  free(puertas);
  free(llaves);
  return 0;
}

