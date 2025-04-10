#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <stack>

// Maze dimensions
const int WIDTH = 20;
const int HEIGHT = 20;

// Cell structure to represent each cell in the maze
struct Cell {
    bool visited;
    sf::RectangleShape rect;
};

// Maze class
class Maze {
public:
    Maze();
    void generate();
    void draw(sf::RenderWindow& window);

private:
    std::vector<std::vector<Cell>> cells;
    std::stack<sf::Vector2i> stack;
};

Maze::Maze() {
    // Initialize cells
    cells.resize(WIDTH, std::vector<Cell>(HEIGHT, {false, sf::RectangleShape()}));

    // Initialize stack
    stack.push({0, 0});
}

void Maze::generate() {
    while (!stack.empty()) {
        sf::Vector2i current = stack.top();
        stack.pop();

        if (current.x < 0 || current.x >= WIDTH || current.y < 0 || current.y >= HEIGHT || cells[current.x][current.y].visited) {
            continue;
        }

        cells[current.x][current.y].visited = true;

        // Perform maze generation logic here (recursive backtracking)
        // ...

        // Push neighboring cells to the stack
        // ...

        // Uncomment the lines below if you want to visualize the generation process
        // window.clear();
        // draw(window);
        // window.display();
        // sf::sleep(sf::milliseconds(50));
    }
}

void Maze::draw(sf::RenderWindow& window) {
    float cellSize = 20.0f;
    for (int x = 0; x < WIDTH; ++x) {
        for (int y = 0; y < HEIGHT; ++y) {
            if (cells[x][y].visited) {
                cells[x][y].rect.setSize(sf::Vector2f(cellSize, cellSize));
                cells[x][y].rect.setPosition(x * cellSize, y * cellSize);
                cells[x][y].rect.setFillColor(sf::Color::White);
                window.draw(cells[x][y].rect);
            }
        }
    }
}

int main() {
    sf::RenderWindow window(sf::VideoMode(WIDTH * 20, HEIGHT * 20), "Maze Generation");
    Maze maze;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        maze.generate();

        window.clear();
        maze.draw(window);
        window.display();
    }

    return 0;
}
