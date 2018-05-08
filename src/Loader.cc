//
// Created by student on 08.05.18.
//

#include <G4MTRunManager.hh>
#include <Loader.hh>
#include <Geometry.hh>
#include <QBBC.hh>
#include <Action.hh>

Loader::Loader(int argc, char** argvr) {
    runManager = new G4MTRunManager();
    runManager->SetVerboseLevel(0);
    runManager->SetUserInitialization(new Geometry);
    auto ph = new QBBC;
    ph->SetVerboseLevel(0);
    runManager->SetUserInitialization(ph);
    runManager->SetUserInitialization(new Action);

    runManager->Initialize();
}
