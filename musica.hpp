#ifndef __musica_hpp__
#define __musica_hpp__
#include <string>

typedef struct musica{
    std::string Nome_musica;
    std::string Nome_artista;
    std::string caminho_musica; //caminho onde a música está;
}Musica;

Musica criar_musica(std::string nome_musica, std::string artista, std::string caminho);

#endif