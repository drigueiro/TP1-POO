#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

#include <iostream>
#include <cstring>
#include "livro.h"

using namespace std;

class AudioBook : public Livro{
    float duracao;
    string formatoAudio;
public:
    AudioBook();
    float getDuracao() const;
    void setDuracao(float duracao);
    const string &getFormatoAudio() const;
    void setFormatoAudio(const string &formatoAudio);

};

#endif