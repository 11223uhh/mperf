#pragma once

#include <chrono>
#include <cstdint>

namespace mperf {

// CPU timing functions
double cpu_thread_time_ms();
double cpu_process_time_ms();

class WallTimer {
public:
    WallTimer();
    void reset();
    double get_msecs() const;
    double get_nsecs() const;

private:
    using clock = std::chrono::high_resolution_clock;
    using time_point = clock::time_point;
    time_point m_start_point;
};

class CPUTimer {
public:
    CPUTimer();
    void reset();
    double get_msecs() const;
    double get_nsecs() const;
    uint64_t get_cycles() const;

private:
    uint64_t m_start_cycle;
};

} // namespace mperf