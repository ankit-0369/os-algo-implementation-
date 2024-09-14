#include "Process.h"

Process::Process(int id, int arrival_time, int burst_time)
    : id(id), arrival_time(arrival_time), burst_time(burst_time) {}


//accessors methods

int Process::get_id() const {
    return id;
}

int Process::get_arrival_time() const {
    return arrival_time;
}

int Process::get_burst_time() const{
    return burst_time;
}