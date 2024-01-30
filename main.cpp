#include "fila.hpp"
#include "musica.hpp"
#include "algoritmos.hpp"
#include "lista.hpp"
#include <iostream>
#include <string>
#include <SFML/Audio.hpp>
#include <filesystem>
#include "Acervo.hpp"


Playlist p1;
int main()
{
    std::filesystem::path diretorio_atual = std::filesystem::current_path();
     
    // Musica musicas[22];
    //criar_coletenea(&coletaneadisp,acervo);
    fila * primeira = new_fila();
    
    int escolha;
    
    do
    {
        system("clear");
        std::cout << "========================================================================================= \u2605\u2605\u2605 PobreFy \u2605\u2605\u2605 ============================================================\n\n";
        std::cout << "Opcões:\n\n(1) Criar/Inserir fila de reproducao\n(2) Exibir fila de reproducao\n(3) Excluir elementos da fila\n(4) Reproduzir\n(5) Criar Playlist e Inserir\n(6) Encerrar\n";

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
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpa o buffer de entrada

                std::cout << "Nome para playlist: ";
                std::string nome_playlist;
                getline(std::cin, nome_playlist);

                Playlist playlist = criar_playlist(nome_playlist);
                std::cout << "\nPLAYLIST CRIADA COM SUCESSO\n\n";
                pause(2);
                system("clear");
                std::cout << "\n\t\tEssas são nossas músicas disponíveis\n\n";
                std::string *vetor1 = get_vetor_acervo(acervo);
                show_vetor(vetor1);

                // Aguarde a entrada do usuário antes de retornar ao menu
                //std::cout << "\nPressione Enter para retornar ao menu...";
                // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpa o buffer de entrada
                // getchar(); // Aguarda o usuário pressionar Enter

                std::cout<<"\nQuer adicionar quantas músicas ? ";
                int n;
                std::cin>>n;

                std:: string straux;
                getchar();
                // getchar();
                for(int i = 1; i<=n;i++){
                    std::cout<<"Música numero ("<<i<<"): ";
                    getline(std::cin,straux);
                    inserir_no_fim(&playlist,buscamusica(acervo,straux));
                    
                }
                //pause(2);
                //system("clear");
                std::cout<<"musicas que foram adicionadas:\n\n\n";
                mostrando_playlist(playlist);
                std::cout<<"\n\n";

                break;
            }


            case 6:
                std::cout<<"\t Obrigado por utilizar o PobreFy. Volte sempre!!\n";
                break;

            default:
                std::cout << "Opcao Invalida";
                break;
        }
    }while(escolha != 6 );

    system("clear");

    return 0;
}


