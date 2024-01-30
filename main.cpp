#include "fila.hpp"
#include "musica.hpp"
#include "algoritmos.hpp"
#include "lista.hpp"
#include <iostream>
#include <string>
#include <SFML/Audio.hpp>
#include <filesystem>
#include "Acervo.hpp"

void vaiporra();
Playlist p1;
int main()
{
    std::filesystem::path diretorio_atual = std::filesystem::current_path();
     
    // Musica musicas[22];
    //criar_coletenea(&coletaneadisp,acervo);
    fila * primeira = new_fila();
    vaiporra();
    int escolha;
    
    do
    {
        system("clear");
        std::cout << "===================== \u2605\u2605\u2605 PobreFy \u2605\u2605\u2605 =====================\n\n";
        std::cout << "Opcoes:\n(1) Criar/Inserir fila de reproducao\n(2) Exibir fila de reproducao\n(3) Excluir elementos da fila\n(4) Reproduzir\n(5) Criar Playlist e Inserir\n(6) Encerrar\n";

        std::cin >> escolha;

        switch(escolha)
        {
            case 1:
            {  
                getchar();
                for(int i = 0; i < 22; i++)
                {
                    system("clear");
                    std::cout << acervo[i].Nome_musica << "\nPor: " << acervo[i].Nome_artista << "\n(1) Inserir (2) Proxima Musica\n(3) Encerrar\n";
                    while(1)
                    {
                        std::cin >> escolha;
                        system("clear");
                        if(escolha == 1)
                        {
                            No * novo = new_node(&acervo[i]);
                            insere_fila(primeira, novo);
                            break;
                        }else if(escolha == 2)
                        {
                            break;
                        }else if (escolha == 3)
                        {
                            i = 22;
                            break;
                        }
                        
                    }
                }

                break;
            }    
            case 2:
            {
                system("clear");

                

                show_fila(primeira);

                std::cout << "(1) Retornar\n";
                while(escolha != 1)
                {
                    std::cin >> escolha;
                }
                getchar();
                break;
            }
            case 3:
            {
                system("clear");
                remove_fila(primeira);
                std::cout << "(1) Retornar\n";
                while(escolha != 1)
                {
                    std::cin >> escolha;
                }
                getchar();
                break;
            }
            case 4:
            {
                system("clear");

                    if (primeira == NULL || primeira->tamanho == 0) 
                    {
                        std::cout << "A lista está vazia!\n";
                        system("clear");
                        break;
                    }

                    No * atual = primeira->cabeca;
                while (atual != NULL)
                 {
                    system("clear");
                    std::string arquivo = diretorio_atual;
                    arquivo += atual->elemento->caminho_musica;

                    sf::SoundBuffer buffer;
                    if (!buffer.loadFromFile(arquivo)) {
                        std::cerr << "Erro ao carregar o arquivo de áudio: " << arquivo << std::endl;
                    } else {
                        sf::Sound sound;
                        sound.setBuffer(buffer);
                        sound.play();

                        while (sound.getStatus() == sf::Sound::Playing) 
                        {
                            system("clear");
                            std::cout << "\u2605" << atual->elemento->Nome_musica << "\nPor: " << atual->elemento->Nome_artista <<"\n";
                            std::cout << "(1) Pausar (2) Encerrar (3) Proxima Musica\n";
                            std::cin >> escolha;
                            if(escolha == 1)
                            {
                                sound.pause();

                                while(1)
                                {
                                    system("clear");
                                    std::cout << "(1) Retomar (2) Encerrar (3) Proxima Musica\n";
                                    std::cin >> escolha;
                                    if(escolha == 1)
                                    {
                                        sound.play();
                                        break;
                                    }else if(escolha == 2)
                                    {
                                        break;
                                    }
                                    if(escolha == 3)
                                    {
                                        sound.stop();
                                        break;
                                    }
                                }
                            }
                            if(escolha == 2)
                            {
                                break;
                            }
                            if(escolha == 3)
                            {
                                sound.stop();
                                break;
                            }
                        }

                        if(escolha != 2)
                        {
                            atual = atual->proximo;
                        } else
                        {
                            break;
                        }
                    }
                }

                system("clear");
                
                break;
            }

            case 5:
            {
                std::cout<<"Nome para playlista: ";
                std::string nome_playlist;
                getchar();
                getline(std::cin, nome_playlist);
                Playlist playlist = criar_playlist(nome_playlist);
                std:: 
                cout<<"\nPLAYLIST CRIADA COM SUCESSO\n\n";
                pause(1);
                system("clear");
                std::cout<<"\n\t\tEssas são nossas músicas disponíveis\n\n";
                std::string * vetor1 = get_vetor_acervo(acervo);
                show_vetor(vetor1);

                
                 
                break;
            }

            case 6:
                std::cout<<"\t Obrigado por utilizar o PobreFy. Volte sempre!!\n";
                break;

            deafult:
                std::cout << "Opcao Invalida";
                break;
        }
    }while(escolha != 6 );

    system("clear");

    return 0;
}


void vaiporra(){
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
  
}