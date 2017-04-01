#include "Outcome.h"
#include "Random.h"

const float MAX_SEED = 1000.0f;

class SituationProbability {
    public:
        SituationProbability(int difficulty = 0);
        ~SituationProbability();

        int factorEmotion(Emotion, Outcome*, Character, float*, int);
        
        //convenience function
        Outcome generateOutcome(int, float);

    private:
        int difficulty;
}