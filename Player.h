#pragma once
#include "Game.h"

class Player
{
    private:
        Game::HitType playerType;
        Coord returnCoord;
    public:
        Player(Game::HitType _playerType);
        Coord InputCoordinates();
        Game::HitType GetPlayerType();
        int ShipsLeft;
};