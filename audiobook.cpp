#include "audiobook.h"

AudioBook::AudioBook() : Livro(){}

float AudioBook::getDuracao() const {return duracao; }

void AudioBook::setDuracao(float duracao) {
    this->duracao = duracao;
}

const string &AudioBook::getFormatoAudio() const {return formatoAudio; }

void AudioBook::setFormatoAudio(const string &formatoAudio) {
    this->formatoAudio = formatoAudio;
}
