#include <SFML/Audio.hpp>
#include <iostream>

int main()
{
    sf::Music instrumental;
    const bool open = instrumental.openFromFile("Inst.ogg");
    
    if(!open) exit(1);
    std::cout << "All good!";
    return 0;
    
}
