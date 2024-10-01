#ifndef PET_H
#define PET_H

template <typename ThingHeight> class Pet{
    public:
        Pet(ThingHeight intitial_Height = 0)
        void displayInfo(){};
    private:
        ThingHeight height;
    };
#include "pet.template"

#endif