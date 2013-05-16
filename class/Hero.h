//
//  Hero.h
//  Pokesgi
//
//  Created by Thibault Lenclos on 14/05/13.
//  Copyright (c) 2013 Thibault Lenclos. All rights reserved.
//

#ifndef __Pokesgi__Hero__
#define __Pokesgi__Hero__

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Trainer.h"

class Hero : public Trainer
{
private:
    // Variables
    sf::Sprite sprite;
    
public:
    Hero(); // Constructeur
    Hero(string name, sf::Texture texture);
    ~Hero(); // Destructeur
    
    // Getters
    sf::Sprite getSprite() const;
    
    // Setters
    void setSprite(sf::Sprite sprite);
    
    // Methodes
    void listenInputs();
};

#endif /* defined(__Pokesgi__Hero__) */