#include <string>
#include "Character.cpp"

class Enemigo : public Personaje {
public:
    // Atributos específicos del enemigo
};

// Subclases de Enemigo
class Melee : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 1 (Melee)
};

class Range : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 2 (Range)
};

class Knight : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 3 (Knight)
};

class Juggernaut : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 4 (Miniboss)
};

class Boss : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 5 (Boss)
};