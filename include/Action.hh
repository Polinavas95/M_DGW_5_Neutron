//
// Created by student on 08.05.18.
//

#ifndef TEMPLATE_ACTION_HH
#define TEMPLATE_ACTION_HH

#include <G4VUserActionInitialization.hh>
#include "PrimaryGen.hh"
class PrimaryGen;
class Action: public G4VUserActionInitialization{
public:
    void Build() const override {
        SetUserAction(new PrimaryGen());

    }
};
#endif //TEMPLATE_ACTION_HH
