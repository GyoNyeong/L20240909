#pragma once
#include "Actor.h"
class AEnemy :
    public AActor
{
public:
    AEnemy()
    {

    }

    virtual ~AEnemy()
    {

    }

    virtual void Tick(int KeyCode) override;


};

