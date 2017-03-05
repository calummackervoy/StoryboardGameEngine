#include "Outcome.h"

enum Emotion {
    AFRAID, ANGRY, CONFIDENT, TIRED, DISTRACTED, ANXIOUS, UPSET, SUSPICIOUS
};

const float MAX_SEED = 1000.0f;
const int MAX_OUTCOMES = 4;

class SituationProbability {
    public:
        SituationProbability(int difficulty = 0);
        ~SituationProbability();

        static float randFloat(float min, float max);
        static int randInt(int min, int max);

        int factorEmotion(Emotion, Outcome*, int);
        
        //convenience function
        Outcome generateOutcome(int, float);

    private:
        int difficulty;
};