#include "musica.hpp"

musica criar_musica(std::string nome_musica, std::string artista, std::string caminho)
{
    Musica nova;

    nova.Nome_musica = nome_musica;
    nova.Nome_artista = artista;
    nova.caminho_musica = caminho;

    return nova;
}