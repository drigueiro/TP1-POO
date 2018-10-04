#ifndef ELETRONICO_H
#define ELETRONICO_H

#include <iostream>
#include <cstring>
#include "livro.h"

using namespace std;

class Eletronico : public Livro{
    string url;
    string formatoArquivo;
public:
    Eletronico();
    const string &getUrl() const;
    void setUrl(const string &url);
    const string &getFormatoArquivo() const;
    void setFormatoArquivo(const string &formatoArquivo);
};


#endif
