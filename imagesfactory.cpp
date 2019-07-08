#include "imagesfactory.h"

std::map<TextureType, sf::Texture> ImagesFactory::textureImages = []{std::map<TextureType, sf::Texture> map; return map;}();
std::map<UnitType, sf::Texture> ImagesFactory::unitImages = []{std::map<UnitType, sf::Texture> map; return map;}();

sf::Texture ImagesFactory::getTextureImage(TextureType type)
{
    if (textureImages.find(type) == textureImages.end())
    {
        sf::Texture texture;
        switch (type)
        {
        case TextureType::GROUND:
            texture.loadFromFile("/home/vshuper1298/Desktop/ground.jpeg");
            break;
        case TextureType::TREE:
            texture.loadFromFile("/home/vshuper1298/Desktop/ground.jpeg");
            break;
        case TextureType::FLOWER:
            texture.loadFromFile("/home/vshuper1298/Desktop/ground.jpeg");
            break;
        case TextureType::ROCK:
            texture.loadFromFile("/home/vshuper1298/Desktop/ground.jpeg");
            break;
        }
        textureImages[type] = texture;
    }

    return textureImages[type];
}

sf::Texture ImagesFactory::getUnitImage(UnitType type)
{
    if (unitImages.find(type) == unitImages.end())
    {
        sf::Texture texture;
        switch (type)
        {
        case UnitType::CHARACTER:
            texture.loadFromFile("/home/vshuper1298/Desktop/unit.jpeg");
            break;
        case UnitType::MONSTER:
            texture.loadFromFile("");
            break;
        }
        unitImages[type] = texture;
    }

    return unitImages[type];
}
