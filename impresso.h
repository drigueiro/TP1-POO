#ifndef IMPRESSO_H
#define IMPRESSO_H

#include <iostream>
#include <cstring>
#include "livro.h"

using namespace std;

class Impresso : public Livro{
    vector <string> livrarias;//usar a coleçao STL
    int colunas;
public:
    Impresso();
    const string &getLivrarias() const;
    void setLivrarias(const string &livrarias);
    int getColunas() const;
    void setColunas(int colunas);
};

#endif
