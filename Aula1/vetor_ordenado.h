#ifndef VETOR_ORDENADO
#define VETOR_ORDENADO

// Dados
typedef struct
{
    int *dados;
    int n;
} vetor;

// Funções
vetor *criar_vetor(int tam);
void destruir_vetor(vetor *v);

void adicionar_elemento(vetor *v, int x);
void remover_elemento(vetor *v, int i);

int busca(vetor *v, int x);
int acessar(vetor *v, int i);
int tamanho(vetor *v);

#endif
