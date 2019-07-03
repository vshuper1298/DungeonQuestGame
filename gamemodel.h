#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include <vector>
#include "observer.h"
#include "constants.h"

class GameModel : Observer
{
public:
    GameModel();
    ~GameModel() = default;
private:
    std::vector<std::vector<TextureType>> gameField;
};

#endif // GAMEMODEL_H
