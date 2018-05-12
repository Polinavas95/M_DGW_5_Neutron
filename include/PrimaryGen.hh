//
// Created by student on 08.05.18.
//

#ifndef TEMPLATE_PRIMARYGEN_HH
#define TEMPLATE_PRIMARYGEN_HH

#include <G4VUserPrimaryGeneratorAction.hh>
#include <G4ParticleGun.hh>
#include <G4UImessenger.hh>
#include <G4UIcmdWithADouble.hh>

class Pormes;

class PrimaryGen: public G4VUserPrimaryGeneratorAction{
private:
    G4ParticleGun* gun;
    G4double Neutron;
    G4ThreeVector pos_vect;
    G4int i;
public:
    Pormes* Pormesclass;
    void Porval(G4double porval);
    PrimaryGen();

    virtual ~PrimaryGen();

    void GeneratePrimaries(G4Event *anEvent) override;
};
class Pormes : public G4UImessenger{
private:
    PrimaryGen* Pormesclass;
    G4UIdirectory* myDir;
    G4UIcmdWithADouble* newPorVal;

public:
    Pormes(PrimaryGen* cls);
    ~Pormes();
    void SetNewValue(G4UIcommand* cmd, G4String nNeutron);
};


#endif //TEMPLATE_PRIMARYGEN_HH
