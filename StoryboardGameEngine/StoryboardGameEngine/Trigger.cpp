#include "Trigger.h"

Trigger::Trigger() {
    id = -1;
}

Trigger::~Trigger() {
    
}

bool Trigger::evaluate() {
    for(int i = 0; i < MAX_REQUIREMENTS; i++) {
        if(requiredResources[i].id == -1) break;
        if(!requiredResources[i].inPossession) return false;
    }
    return true;
}

int Trigger::addOutcome(Outcome o){
    for(int i = 0; i < MAX_OUTCOMES; i++) {
        if(outcomes[i].id == -1) {
            o.id = i;
            outcomes[i] = o;
            return i;
        }
    }
    return -1; //adding unsuccessful
}

int Trigger::addRequirement(Resource r) {
    for(int i = 0; i < MAX_REQUIREMENTS; i++) {
        if(requiredResources[i].id == -1) {
            r.id = i;
            requiredResources[i] = r;
            return i;
        }
    }
    return -1; //adding unsuccessful
}