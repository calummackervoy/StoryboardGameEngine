#include "Outcome.h"

struct Trigger {
    Outcome* outcomes;
    int size;
};

class StoryFrame {
public:
    StoryFrame(int difficulty = 0);

private:
    Trigger* triggers;
    int size;
	int difficulty;
};