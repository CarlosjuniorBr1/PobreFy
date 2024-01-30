#ifndef __lista_hpp__
#define __lista_hpp__

#include "musica.hpp"
#include <string>

typedef struct no{
    Musica musica;
    struct no * proximo;
}Node;

typedef struct lista{
    Node * inicio;
    std:: string titulo; 
    int tamanho;
}Playlist;

//criando novo node
Node * criar_node (Musica musica); 
//criar playlist(lista);
Playlist criar_playlist(std::string titulo);

//insert musica no inico
void inserir_no_inicio(Playlist * playlist,Musica musica);
//insert musica no fim;
void inserir_no_fim(Playlist * playlist, Musica  musica);
//insert musica no meio
void inseir_no_meio(Playlist * playlist, Musica  musica, std::string nome_musica);
//remover_elemento
void remover_musica(Playlist * playlist, std::string nome_musica);
//deleta playlist
void deleta_playlist();
//exibindo playlist
void mostrando_playlist(Playlist playlist);

void pause(int n);
#endif
