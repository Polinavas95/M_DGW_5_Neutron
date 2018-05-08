//
// Created by student on 08.05.18.
//

#ifndef TEMPLATE_GEOMETRY_HH
#define TEMPLATE_GEOMETRY_HH

#include <G4VUserDetectorConstruction.hh>

class Geometry: public G4VUserDetectorConstruction{

public:
    G4VPhysicalVolume *Construct() override;
};
#endif //TEMPLATE_GEOMETRY_HH
