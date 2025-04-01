#include <SFML/Audio.hpp>

int main()
{
    sf::Music instrumental;
    const bool open = instrumental.openFromFile("Inst.ogg");
    
    if(!open) exit(1);

    return 0;
    
}
