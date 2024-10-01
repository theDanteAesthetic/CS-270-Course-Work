/*
 * FitWatch
 *
 * Simulates a personal fitness tracker.
 * Estimates calories burned per mile walked.
 */
#include "FitWatch.h"

namespace fit_watch_tracker
{
/*
 * default constructor
 * initializes attributes distance to 0, calories to 0.
 */
FitWatch::FitWatch(double initial_distance, double initial_calories){
    distance = initial_distance;
    calories = initial_calories;
}

/*
 * reset
 * post-condition: Resets attributes distance to 0, calories to 0.
 */
void FitWatch::reset(){
    distance = 0;
    calories = 0;
}

/* 
 * walk
 * pre-condition: receives miles walked as a positive number.
 * post-condition: if miles is > 0, then increase distance by miles and
 * increase calories burned by 100 x miles.
 */
void FitWatch::walk(double miles){
    if(miles > 0){
        distance += miles;
    }
}

/*
 * getCaloriesBurned
 * return number of calories burned.
 */


/*
 * getMilesWalked
 * return number of miles walked.
 */
}