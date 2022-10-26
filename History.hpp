#ifndef HISTORY.HPP
#define HISTORY.HPP

#include <queue>
#include "DailyMarketPrice.hpp"

class History() {
  public:
    int periodInDays;
    queue<int> marketData;

    // constructor
    History(timeSeries timeSeries, int periodInDays);

    // member function
    queue<int> getHistory();
    int getTimeSeries();
    void addNewData(time_series timeSeries, vector<?>);
    
  private:
    
};

#endif // HISTORY.HPP