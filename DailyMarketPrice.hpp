#ifndef DAILY_MARKET_PRICE.HPP
#define DAILY_MARKET_PRICE.HPP

class DailyMarketPrice() {
  public:
    Enum TimeSeries = { TICK, ONE_HOUR, TWO_HOUR, SIX_HOUR, TWELVE_HOUR, ONE_DAY }
    Enum PriceType = { HIGH, LOW, CLOSE, AVERAGE, TYPICAL }
    // dailyMarketPrice = { hour, highPrice, lowPrice, closePrice }
    vector<int, double, double, double>* dailyMarketPrice;
    double highPrice, lowPrice, closePrice, averagePrice, typicalPrice;

    // constructor / destructor => create DailyMarketPrice object
    DailyMarketPrice(TimeSeries timeSeries, vector<int, double, double, double>* dailyMarketPrice);
    ~DailyMarkeyPrice();

    // member functions
    double getDailyMarketPriceByTime(int time); // time(hour): int
    getDailyMarketPriceByTimeSeries(TimeSeries timeSeries);

  private:
      TimeSeries getTimeSeries();
      vector<int, double> getDailyMarketPrice();
      void calculatePrices(); // calculate and store high, low, close, average and typical price
};