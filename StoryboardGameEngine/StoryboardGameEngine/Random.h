#pragma once
#include <random>

float randomFloat(float MAX) {
	return static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (MAX * 2))) - MAX;
}

int randomInt(int max, int min = 0) {
	return rand() % max + min; //between min and max
}