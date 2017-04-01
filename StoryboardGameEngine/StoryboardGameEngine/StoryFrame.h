#include "Outcome.h"

const int MAX_TRIGGERS = 8;

struct Trigger {
    Outcome* outcomes;
    int size;
    int id;
}

class StoryFrame {
public:
    StoryFrame(int difficulty = 0);

    int addTrigger(Trigger* trigger);
    void removeTrigger(int id);

private:
    Trigger* triggers[MAX_TRIGGERS];
    int difficulty;
}