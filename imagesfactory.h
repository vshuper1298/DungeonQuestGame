#ifndef IMAGESFACTORY_H
#define IMAGESFACTORY_H

#include <map>
#include <SFML/Graphics.hpp>
#include "constants.h"

class ImagesFactory
{
public:
    ImagesFactory() = delete;
    ImagesFactory(const ImagesFactory &) = delete;
    ImagesFactory & operator=(const ImagesFactory &) = delete;
    ImagesFactory(const ImagesFactory &&) = delete;
    ImagesFactory & operator=(const ImagesFactory &&) = delete;
    ~ImagesFactory() = delete;
    static sf::Texture getTextureImage(TextureType type);
    static sf::Texture getUnitImage(UnitType type);
private:
    static std::map<TextureType, sf::Texture> textureImages;
    static std::map<UnitType, sf::Texture> unitImages;
};

#endif // IMAGESFACTORY_H
