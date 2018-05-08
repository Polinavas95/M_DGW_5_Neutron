//
// Created by student on 08.05.18.
//

#ifndef TEMPLATE_LOADER_HH
#define TEMPLATE_LOADER_HH


#include <G4MTRunManager.hh>

class Loader{
private:
    G4MTRunManager* runManager;
public:
    Loader(int argc, char** argv);
};

#endif //TEMPLATE_LOADER_HH
