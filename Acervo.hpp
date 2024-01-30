#ifndef __Acervo_hpp__
#define __Acervo_hpp__

#include "musica.hpp"
#include "lista.hpp"

void criar_coletenea(Playlist * Acervo, Musica musicas[]);
void exibir_acerto(Playlist Acervo );


Musica acervo[]{
    criar_musica("Animal Beast","DKM","/MusicasWav/AnimalBeast.wav"),
    criar_musica("As You Fade Away","DKM","/MusicasWav/AsYouFadeAway.wav"),
    criar_musica("Beside Me","DKM","/MusicasWav/besideme.wav"),
    criar_musica("Circle Dance","DKM","/MusicasWav/CircleDance.wav"),
    criar_musica("cr7Champions","Cristiano","/MusicasWav/cr7Champions.wav"),
    criar_musica("Enough","DKM","/MusicasWav/Enough.wav"),
    criar_musica("Fynest Lyk","DKM","/MusicasWav/FynestLyk.wav"),
    criar_musica("Get Through","DKM","/MusicasWav/GetThrough.wav"),
    criar_musica("Go","DKM","/MusicasWav/Go.wav"),
    criar_musica("Knowpe","DKM","/MusicasWav/Knowpe.wav"),
    criar_musica("Make You Move","DKM","/MusicasWav/MakeYouMove.wav"),
    criar_musica("Myd Nyte","DKM","/MusicasWav/MydNyte.wav"),
    criar_musica("Nine Lives","DKM","/MusicasWav/NineLives.wav"),
    criar_musica("No Filter","DKM","/MusicasWav/NoFilter.wav"),
    criar_musica("No Starlight Dey Beat","DKM","/MusicasWav/NoStarlightDeyBeat.wav"),
    criar_musica("On & On","DKM","/MusicasWav/on&on.wav"),
    criar_musica("One More","Time Ofshane","/MusicasWav/OneMore.wav"),
    criar_musica("Play Dead","DKM","/MusicasWav/PlayDead.wav"),
    criar_musica("Retribuition","DKM","/MusicasWav/Retribuition.wav"),
    criar_musica("Rythmin You","DKM","/MusicasWav/RhythminYou.wav"),
    criar_musica("Ruthless","DKM","/MusicasWav/Ruthless.wav"),
    criar_musica("Bellighan","O Iluminado","/bellighan.wav")
};

#endif