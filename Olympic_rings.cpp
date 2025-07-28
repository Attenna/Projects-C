#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(600, 400), "Olympic Rings");
    
    // 创建5个圆环
    sf::CircleShape rings[5];
    sf::Color colors[5] = {sf::Color::Blue, sf::Color::Yellow, sf::Color::Black, sf::Color::Green, sf::Color::Red};
    
    // 设置圆环位置和属性
    for (int i = 0; i < 5; i++) {
        rings[i].setRadius(50);
        rings[i].setOutlineThickness(5);
        rings[i].setOutlineColor(colors[i]);
        rings[i].setFillColor(sf::Color::Transparent);
    }
    
    // 设置位置
    rings[0].setPosition(100, 100);  // 蓝色
    rings[1].setPosition(200, 100);  // 黄色
    rings[2].setPosition(300, 100);  // 黑色
    rings[3].setPosition(150, 150);  // 绿色
    rings[4].setPosition(250, 150);  // 红色
    
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear(sf::Color::White);
        
        // 绘制所有圆环
        for (int i = 0; i < 5; i++) {
            window.draw(rings[i]);
        }
        
        window.display();
    }
    
    return 0;
}
