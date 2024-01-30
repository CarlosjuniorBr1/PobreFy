#ifndef __fila_hpp__
#define __fila_hpp__

#include "musica.hpp"
#include <string>

typedef struct No
{
    musica * elemento;
    No * proximo;
}No;

typedef struct fila
{
    No * cabeca;
    int tamanho;
}fila;

fila * new_fila();

No * new_node(musica * m);

void insere_fila(fila * f, No * novo);

void insere_node(No * head, No * novo);

void remove_fila(fila * f);

void remove_node(No * head);

void show_fila(fila * f);

void show_node(No * head);

#endif