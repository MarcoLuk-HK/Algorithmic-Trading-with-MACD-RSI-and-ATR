#include "record.hpp"
#include <numeric>

double record::get_average() const
{
    double sum;
    for (std::deque<double>::const_iterator it = ticks.begin(); it != ticks.end(); it++)
    {
        sum += *it;
    }
    return sum / ticks.size();
}

void record::add_tick(const double &tick)
{
    ticks.push_back(tick);
    if (ticks.size() > length)
    {
        ticks.pop_front();
    }
}

bool record::is_full()
{
    return length == ticks.size();
}

record::record(const int &in_length) : length(in_length)
{

}