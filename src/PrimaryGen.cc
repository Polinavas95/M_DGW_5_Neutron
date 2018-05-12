//
// Created by student on 08.05.18.
//

#include <G4Event.hh>
#include <PrimaryGen.hh>
#include <G4Gamma.hh>
#include <G4Neutron.hh>
#include <G4Electron.hh>
#include "G4SystemOfUnits.hh"


PrimaryGen::PrimaryGen() {
    Pormesclass=new Pormes(this);
    pos_vect.set(0,0,-10*cm);
    gun = new G4ParticleGun(1);
    gun->SetParticleMomentumDirection(G4ThreeVector(0,0,1));
    gun->SetParticlePosition(pos_vect);
    gun->SetParticleEnergy(661*keV);
}
Pormes::Pormes(PrimaryGen* cls):Pormesclass(cls) {
    myDir = new G4UIdirectory ("/my_dir/");
    newPorVal = new G4UIcmdWithADouble ("/my_dir/set_new_neutron", this);
}
void Pormes::SetNewValue(G4UIcommand* cmd1, G4String nNeutron){
    if (cmd1 == newPorVal){
        Pormesclass->Porval(newPorVal -> GetNewDoubleValue(nNeutron));
    }
}
void PrimaryGen::Porval(G4double porval){
    Neutron = porval;
}
void PrimaryGen::GeneratePrimaries(G4Event *anEvent) {

    if(Neutron==1){
        gun->SetParticleDefinition(G4Neutron::NeutronDefinition());
    }
    else{
        gun->SetParticleDefinition(G4Gamma::GammaDefinition());
    }
    gun->GeneratePrimaryVertex(anEvent);
}
Pormes::~Pormes(){}
PrimaryGen::~PrimaryGen() {
    delete gun;
}

