// Etat.h
#pragma once

#include <string>
#include "Automate.h"
#include "symbole.h"

using namespace std;

class Automate; // Déclaration anticipée pour éviter une dépendance circulaire

class Etat {
public:
    Etat(string name);
    virtual ~Etat() {}
    virtual bool transition(Automate & automate, Symbole *s) = 0;
protected:
    string name;
public:
    const string &getName() const {
        return name;
    }
};

