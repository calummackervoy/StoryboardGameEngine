#include "Outcome.h"
#include "Trigger.h"
#include <string>

const int MAX_TRIGGERS = 8;

class StoryFrame {
public:
    StoryFrame(int difficulty = 0);

    int addTrigger(Trigger* trigger);
    void removeTrigger(int id);

private:
    Trigger* triggers[MAX_TRIGGERS];
    int difficulty;
}