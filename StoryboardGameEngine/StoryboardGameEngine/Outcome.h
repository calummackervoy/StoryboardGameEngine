const int NUM_EMOTIONS = 8

//represents outcome functionality
typedef struct Outcome{
    int id;
    float favourability;
};

enum Emotion {
    AFRAID, ANGRY, CONFIDENT, TIRED, DISTRACTED, ANXIOUS, UPSET, SUSPICIOUS
};

struct Character {
    float emotInclinations[NUM_EMOTIONS] = {1,1,1,1,1,1,1,1};
};