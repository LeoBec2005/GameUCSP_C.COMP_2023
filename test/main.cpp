#include <SFML/Graphics.hpp>
#include <class.h>

int main() {
    // Crear una ventana SFML
    sf::RenderWindow window(sf::VideoMode(800, 600), "test");

    // Crear el personaje
    sf::CircleShape ball(50);
    ball.setFillColor(sf::Color::Green);
    ball.setPosition(375, 275);

    // Bucle principal
    while (window.isOpen()) {
        // Procesar eventos
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Mover el personaje con las teclas de flecha
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            ball.move(-5, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            ball.move(5, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
            ball.move(0, -5);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            ball.move(0, 5);
        }

        // Limpiar la ventana
        window.clear();

        // Dibujar el personaje en la ventana
        window.draw(ball);

        // Mostrar la ventana
        window.display();
    }

    return 0;
}




