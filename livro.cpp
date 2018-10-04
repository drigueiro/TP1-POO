#include "livro.h"

Livro::Livro() {}

const vector<string> &Livro::getEscritores() const {return escritores;}

void Livro::setEscritores(const vector<string> &escritores){
    this->escritores = escritores;
}

const string &Livro::getTitulo() const {return titulo; }

void Livro::setTitulo(const string &titulo) {
    this->titulo = titulo;
}

const string &Livro::getCapitulos() const {return capitulos; }

void Livro::setCapitulos(const string &capitulos) {
    this->capitulos = capitulos;
}

int Livro::getAnoPublicacao() const {return anoPublicacao; }

void Livro::setAnoPublicacao(int anoPublicacao) {
    this->anoPublicacao = anoPublicacao;
}

const string &Livro::getIdiomaOriginal() const {return idiomaOriginal; }

void Livro::setIdiomaOriginal(const string &idiomaOriginal) {
    this->idiomaOriginal = idiomaOriginal;
}

const string &Livro::getKeywords() const {return keywords; }

void Livro::setKeywords(const string &keywords) {
    Livro::keywords = keywords;
}

