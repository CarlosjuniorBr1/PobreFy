#ifndef __algoritmos_hpp__
#define __algoritmos_hpp__

#include "musica.hpp"
#include "fila.hpp"
#include <filesystem>
#include <string>

std::string* get_vetor_acervo(Musica * M);

void show_vetor(std::string * M);

void ordena_vetor_fila(std::string* vetor, int inicio, int final);

void separa_vetor_fila(std::string * vetor, int inicio, int final);

#endif
