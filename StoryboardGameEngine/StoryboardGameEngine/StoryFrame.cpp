#include "StoryFrame.h"

StoryFrame::StoryFrame(int difficulty) {
    this->difficulty = difficulty;

    for(int i = 0; i < MAX_TRIGGERS; i++) {
        triggers[i] = NULL;
    }
}

int StoryFrame::addTrigger(Trigger* trigger) {
    for(int i = 0; i < MAX_TRIGGERS; i++) {
        if(triggers[i] == NULL) {
            triggers[i] = trigger;
            trigger->id = i;
            return i;
        }
    }
    return -1; //adding unsuccessful
}

void StoryFrame::removeTrigger(int id) {
    //bounds checking
    if(id < 0 || id > MAX_TRIGGERS) throw std::exception("index out of range");
    if(triggers[id] == NULL) return;

    delete triggers[id];
    triggers[id] = NULL;
}