#include "SituationProbability.h"

SituationProbability::SituationProbability(int difficulty) {
    this->difficulty = difficulty;
}

SituationProbability::~SituationProbability() {
}

int factorEmotion(Emotion emotion, Outcome* outcomes, Character c, float* probs, int size) { 
        int biggest = 0;
        for(int i = 0; i < size; i++) {
            //randomly generate seed
            float seed = randFloat(MAX_SEED * 0.01 ,MAX_SEED);

            //figure random factor
            probs[i] = probs[i] + c.emotInclinations[emotion];
            probs[i] = probs[i] + outcomes[i].favourability * seed;

            //NOTE: because of use of >
            //it is ideal for decisions/favourability to be ordered in ascending order
            //(for rare cases when results are equal)
            if(probs[i] > biggest) biggest = i;
        }
        return biggest;
}

Outcome generateOutcome(int id, float favourability) {
    return {id, favourability};
}