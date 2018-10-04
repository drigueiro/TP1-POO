#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Livro{
    vector <string> escritores;//usar a coleçao STL
    string titulo;
    vector <string> capitulos;//usar a coleçao STL
    int anoPublicacao;
    string idiomaOriginal;
    vector <string> keywords;//usar a coleçao STL
public:
    Livro();
    const vector<string> &getEscritores() const;
    void setEscritores(const vector<string> &escritores);
    const string &getTitulo() const;
    void setTitulo(const string &titulo);
    const string &getCapitulos() const;
    void setCapitulos(const string &capitulos);
    int getAnoPublicacao() const;
    void setAnoPublicacao(int anoPublicacao);
    const string &getIdiomaOriginal() const;
    void setIdiomaOriginal(const string &idiomaOriginal);
    const string &getKeywords() const;
    void setKeywords(const string &keywords);
};

#endif
