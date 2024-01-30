#include "fila.hpp"
#include "musica.hpp"
#include <string>
#include <cstdlib>
#include <iostream>
#include <SFML/Audio.hpp>

fila * new_fila()
{
    fila * f = NULL;
    f = (fila*)malloc(sizeof(fila));

    f->cabeca = NULL;
    f->tamanho = 0;

    return f;
}

No * new_node(musica * m)
{
    No * n = NULL;
    n = (No*)malloc(sizeof(No));

    //Linha Criminosa
    n->elemento = m;

    n->proximo = NULL;

    return n;
}

void insere_fila(fila * f, No * novo)
{
    if(!f)
    {
        return;
    }

    if(f->tamanho == 0)
    {
        f->cabeca = novo;
        f->tamanho++;
        return;
    }

    std::cout << "teste\n";

    insere_node(f->cabeca, novo);

    f->tamanho++;

    return;
}

void insere_node(No * head, No * novo)
{
    if(head->proximo == NULL)
    {
        std::cout << "Dentro do IF\n";
        head->proximo = novo;
        novo->proximo = NULL;
        return;
    }

    std::cout << "Fora do IF\n";

    insere_node(head->proximo, novo);

    std::cout << "Return\n";
}

void remove_fila(fila * f)
{
    if(f->tamanho == 0)
    {
        std::cout << "A sua Fila ja esta vazia!\n";
        return;
    } else
    {
        No * atual = f->cabeca;

        f->cabeca = f->cabeca->proximo;

        std::cout << atual->elemento->Nome_musica <<" Removido com Sucesso!\n";

        free(atual);

        f->tamanho--;

        if (f->tamanho == 0)
        {
            f->cabeca = NULL;
        }
    }
}

void remove_node(No * head)
{
    if(head->proximo == NULL)
    {
        free(head);
        return;
    }

    No * segui = head->proximo;
    free(head);
    remove_node(segui);
}

void show_fila(fila * f)
{
    if(f->tamanho == 0)
    {
        std::cout << "Que pena, parece que sua Lista esta vazia\nConsidere adicionar o melhor som para o seu momento\n";
        return;
    }

    std::cout << "Sua lista possui: " << f->tamanho << " Musicas\n";

    show_node(f->cabeca);
}

void show_node(No * head)
{
    std::cout<<"========================================\n";
    std::cout << "\u2606 " << head->elemento->Nome_musica << "\nPor: " << head->elemento->Nome_artista << "\n";

    if(head->proximo)
    {
        show_node(head->proximo);
        return;
    }

    std::cout<<"========================================\n";

}