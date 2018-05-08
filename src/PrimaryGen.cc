//
// Created by student on 08.05.18.
//

#include <G4Event.hh>
#include <PrimaryGen.hh>
#include <G4Gamma.hh>
#include "G4SystemOfUnits.hh"
void PrimaryGen::GeneratePrimaries(G4Event *anEvent) {
    gun->GeneratePrimaryVertex(anEvent);
}

PrimaryGen::PrimaryGen() {
    gun = new G4ParticleGun(1);
    gun->SetParticleDefinition(G4Gamma::GammaDefinition());
    gun->SetParticleMomentumDirection(G4ThreeVector(0,0,1));
    gun->SetParticlePosition(G4ThreeVector(0,0,-10*cm));
    gun->SetParticleEnergy(661*keV);
}

PrimaryGen::~PrimaryGen() {
    delete gun;
}
