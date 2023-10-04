#include <string>

// Clase base para Jugador y Enemigo
class Personaje {
public:
    int Health;
    int Attack;
};

// Subclases de Personaje
class Jugador : public Personaje {
public:
    // Aquí puedes agregar atributos específicos del jugador si es necesario
};

class Enemigo : public Personaje {
public:
    // Atributos específicos del enemigo
};

// Subclases de Enemigo
class Clase1 : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 1 (Melee)
};

class Clase2 : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 2 (Range)
};

class Clase3 : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 3 (Knight)
};

class Clase4 : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 4 (Miniboss)
};

class Clase5 : public Enemigo {
public:
    // Atributos y métodos específicos de la Clase 5 (Boss)
};

// Clase Mobs
class Mobs {
public:
    // Atributos y métodos de la clase Mobs
};

// Subclases de Mobs
class MobsQuest : public Mobs {
public:
    // Atributos y métodos específicos de MobsQuest
};

class MobsUtilitarios : public Mobs {
public:
    // Atributos y métodos específicos de MobsUtilitarios
};

// Clase Items
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

// Clase Portal
class Portal {
public:
    // Atributos y métodos de la clase Portal
};

// Relación entre Portal y Dimensión
class Dimensión {
public:
    // Atributos y métodos de la clase Dimensión
};