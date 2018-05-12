//
// Created by idalov on 12.05.18.
//

#ifndef TEMPLATE_EVENTACTION_HH
#define TEMPLATE_EVENTACTION_HH

#include <G4UserEventAction.hh>
#include <pwdefs.hh>

class RunAction;

class EventAction: public G4UserEventAction{
    RunAction* runAction;
    G4double Threshold;
public:
    explicit EventAction(RunAction *runAction);
};
#endif //TEMPLATE_EVENTACTION_HH
