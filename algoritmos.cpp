#include "algoritmos.hpp"
#include <iostream>
#include <cstdlib>

std::string* get_vetor_acervo(Musica * M)
{

    std::string* vetor = NULL;
    vetor = (std::string*)malloc(sizeof(std::string)*22);

    for(int i = 0; i < 22; i++)
    {
        vetor[i] = M[i].Nome_musica;
    }

    return vetor;
}

void show_vetor(std::string * M)
{
    int tamanho_vetor = 22;

    for(int i = 0; i < tamanho_vetor; i++)
    {
        std::cout << i <<": " << M[i] << "\n";
    }
}

void ordena_vetor_fila(std::string* vetor, int inicio, int meio, int final)
{
    int Val1 = (meio - inicio + 1);
    int Val2 = (final - meio);

    std::string* esquerda = (std::string*)malloc(sizeof(std::string) * Val1);
    std::string* direita = (std::string*)malloc(sizeof(std::string) * Val2);

    for (int i = 0; i < Val1; i++)
    {
        esquerda[i] = vetor[inicio + i];
    }
    for (int j = 0; j < Val2; j++)
    {
        direita[j] = vetor[meio + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = inicio;

    while (i < Val1 && j < Val2)
    {
        if (esquerda[i] <= direita[j])
        {
            vetor[k] = esquerda[i];
            i++;
        }
        else
        {
            vetor[k] = direita[j];
            j++;
        }

        k++;
    }

    while (i < Val1)
    {
        vetor[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < Val2)
    {
        vetor[k] = direita[j];
        j++;
        k++;
    }

    free(esquerda);
    free(direita);
}

void separa_vetor_fila(std::string * vetor, int inicio, int final) {
    if (inicio < final) {
        int meio = inicio + (final - inicio) / 2;

        separa_vetor_fila(vetor, inicio, meio);
        separa_vetor_fila(vetor, meio + 1, final);

        ordena_vetor_fila(vetor, inicio, meio, final);
    }
}

musica buscamusica(musica * array,std::string strnome){
    musica resul;
    for(int i = 0; i<22;i++){
        if(strnome == array[i].Nome_musica){
            resul = array[i];
        }
    }
    return resul;
}