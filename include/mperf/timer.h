#pragma once

namespace mperf {

// CPU timing functions
double cpu_thread_time_ms();
double cpu_process_time_ms();

class CPUTimer {
public:
    CPUTimer() { reset(); }
    void reset();
    double get_msecs() const;

private:
    double m_start_point;
};

} // namespace mperf