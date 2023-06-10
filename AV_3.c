#include <stdio.h>

struct Pessoa {
   char nome[50];
   int idade;
};

int main() {
   struct Pessoa p;
   FILE *arquivo;

   printf("Informe o nome: ");
   scanf("%s", p.nome);

   printf("Informe a idade: ");
   scanf("%d", &p.idade);

   arquivo = fopen("pessoa.txt", "w");

   fprintf(arquivo, "Nome: %s\n", p.nome);
   fprintf(arquivo, "Idade: %d\n", p.idade);

   fclose(arquivo);

   return 0;
}