#ifndef RECORD_HPP
#define RECORD_HPP

#include <deque>

class record
{
    private:
        std::deque<double> ticks;
        int length;
    public:
        double get_average() const;
        void add_tick(const double &tick);
        bool is_full();
        record(const int &length);
};

#endif // RECORD_HPP