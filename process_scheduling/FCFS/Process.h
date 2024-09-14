#ifndef PROCESS_H
#define PROCESS_H

class Process{
    private:
    int id;
    int arrival_time;
    int burst_time;

    public:
    Process(int id, int arrival_time, int burst_time);
    //accessor methods to access data members
    int get_id() const;
    int get_arrival_time() const;
    int get_burst_time() const;
};


#endif