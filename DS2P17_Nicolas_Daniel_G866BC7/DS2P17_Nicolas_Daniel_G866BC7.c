#include <stdio.h>
#include <string.h>
//Inclui a <string> para conseguir utilizar a função strcmp e realizar o retorno via if/else

main(){

//Defino RA do aluno
char RA_aluno[] = "G866BC7";

//Solicitar ao aluno inserir RA
char RA_usuario[10];
printf("Insira o seu RA: ");
scanf("%s", RA_usuario);

//Comparo as duas strings
if(strcmp(RA_aluno, RA_usuario) == 0){
    printf("O RA e valido!\n");
}
else{
    printf("O RA nao e valido!\n");
}

return 0;
}

