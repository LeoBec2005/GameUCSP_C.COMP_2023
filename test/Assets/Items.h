#include <string>

class Items {
public:
    // Atributos y métodos de la clase Items
};

// Subclases de Items
class Armamento : public Items {
public:
    // Atributos y métodos específicos de Armamento
};

class Reliquias : public Items {
public:
    // Atributos y métodos específicos de Reliquias
};

// Subclases de Reliquias
class Fuego : public Reliquias {
public:
    // Atributos y métodos específicos de Fuego
};

class Agua : public Reliquias {
public:
    // Atributos y métodos específicos de Agua
};

class Aire : public Reliquias {
public:
    // Atributos y métodos específicos de Aire
};

class Tierra : public Reliquias {
public:
    // Atributos y métodos específicos de Tierra
};