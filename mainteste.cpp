#include <iostream>
#include "lista.hpp"
#include "musica.hpp"
#include "Acervo.hpp"
#include <string>
#include <chrono>
#include <thread>


int main(){

    std:: string mn = "Cruel Summer";
    std:: string art = "Taylor Swift";
    std:: string cam = "hits";

    Playlist p1 = criar_playlist("PopMusic");
    Musica m1 = criar_musica(mn,art,cam);
    
     mn = "Starboy";
     art = "The Weeknd";
     cam = "hits";

    Musica m2 = criar_musica(mn,art,cam);
     inserir_no_inicio(&p1,acervo[0]);
     inserir_no_fim(&p1,acervo[1]);
      inserir_no_fim(&p1,acervo[2]);
      inserir_no_fim(&p1,acervo[3]);
      inserir_no_fim(&p1,acervo[4]);
      inserir_no_fim(&p1,acervo[5]);
      inserir_no_fim(&p1,acervo[6]);
      inserir_no_fim(&p1,acervo[7]);
      inserir_no_fim(&p1,acervo[8]);
      inserir_no_fim(&p1,acervo[9]);
      inserir_no_fim(&p1,acervo[10]);
      inserir_no_fim(&p1,acervo[11]);
      inserir_no_fim(&p1,acervo[12]);
      inserir_no_fim(&p1,acervo[13]);
      inserir_no_fim(&p1,acervo[14]);
      inserir_no_fim(&p1,acervo[15]);
      inserir_no_fim(&p1,acervo[16]);
      inserir_no_fim(&p1,acervo[17]);
      inserir_no_fim(&p1,acervo[18]);
      inserir_no_fim(&p1,acervo[19]);
      inserir_no_fim(&p1,acervo[20]);
      inserir_no_fim(&p1,acervo[21]);
  
    

    
    mostrando_playlist(p1);
    
    
    //std::cout<<p1->inicio->musica->Nome_musica<<"\n";
    //std::cout<<m2.Nome_musica<<"\n";

    //mostrando_playlist(p1);
}

