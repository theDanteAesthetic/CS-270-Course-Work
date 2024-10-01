/*
 * FitWatch
 *
 * Simulates a personal fitness tracker.
 * Estimates calories burned per mile walked.
 */
#ifndef FIT_WATCH
#define FIT_WATCH

namespace fit_watch_tracker{ 
class FitWatch 
{
// public means that the following methods are visible outisde of 
// this FitWatch class.
public:
  /*
   * default constructor
   * initializes attributes distance to 0, calories to 0.
   */
  FitWatch(double intitial_distance = 0, double initial_calories = 0);
  /*
   * reset
   * post-condition: Resets attributes distance to 0, calories to 0.
   */
  void reset();

  /* 
   * walk
   * pre-condition: receives miles walked as a positive number.
   * post-condition: if miles is > 0, then increase distance by miles and
   * increase calories burned by 100 x miles.
   */
  void walk(double miles);
  /*
   * getCaloriesBurned
   * return number of calories burned.
   */
  int getCaloriesBurned() const;
  /*
   * getMilesWalked
   * return number of miles walked.
   */
  double getMilesWalked() const;

// private means that the following member variables or attributes
// are visible only inside this FitWatch class.
private:
  double distance;
  double calories;
};
}
#endif