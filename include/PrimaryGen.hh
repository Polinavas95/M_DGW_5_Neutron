//
// Created by student on 08.05.18.
//

#ifndef TEMPLATE_PRIMARYGEN_HH
#define TEMPLATE_PRIMARYGEN_HH

#include <G4VUserPrimaryGeneratorAction.hh>
#include <G4ParticleGun.hh>

class PrimaryGen: public G4VUserPrimaryGeneratorAction{
private:
    G4ParticleGun* gun;

public:
    PrimaryGen();

    virtual ~PrimaryGen();

    void GeneratePrimaries(G4Event *anEvent) override;
};
#endif //TEMPLATE_PRIMARYGEN_HH
