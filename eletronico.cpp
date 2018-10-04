#include "eletronico.h"

Eletronico::Eletronico() : Livro(){}

const string &Eletronico::getUrl() const {return url; }

void Eletronico::setUrl(const string &url) {
    this->url = url;
}

const string &Eletronico::getFormatoArquivo() const {return formatoArquivo; }

void Eletronico::setFormatoArquivo(const string &formatoArquivo) {
    this->formatoArquivo = formatoArquivo;
}
