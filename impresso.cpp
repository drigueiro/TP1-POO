#include "impresso.h"

Impresso::Impresso():Livro(){}
const string &Impresso::getLivrarias() const {return livrarias; }

void Impresso::setLivrarias(const string &livrarias) {
    this->livrarias = livrarias;
}

int Impresso::getColunas() const {return colunas; }

void Impresso::setColunas(int colunas) {
    this->colunas = colunas;
}
