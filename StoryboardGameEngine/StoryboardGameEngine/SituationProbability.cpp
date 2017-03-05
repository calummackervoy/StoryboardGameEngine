#include "SituationProbability.h"

SituationProbability::SituationProbability(int difficulty) {
    this->difficulty = difficulty;
}

SituationProbability::~SituationProbability() {
}

float SituationProbability::randFloat(float min, float max) {
	return 0.0f;
}

int SituationProbability::randInt(int min, int max) {
	return 0;
}

int SituationProbability::factorEmotion(Emotion emotion, Outcome* outcomes, int size) { 
        float result[MAX_OUTCOMES];
        
        float factor;
        int biggest = 0;
        for(int i = 0; i < size; i++) {
            //randomly generate seed
            float seed = randFloat(MAX_SEED * 0.01 ,MAX_SEED);

            //figure random factor
            result[i] = outcomes[i].favourability * seed;

            //NOTE: because of use of >
            //it is ideal for decisions/favourability to be ordered in ascending order
            //(for rare cases when results are equal)
            if(result[i] > biggest) biggest = i;
        }
        return biggest;
}

Outcome SituationProbability::generateOutcome(int id, float favourability) {
    return {id, favourability};
}