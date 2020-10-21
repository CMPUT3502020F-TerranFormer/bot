//
// Created by Kerry Cao on 2020-10-20.
//

#ifndef BOT_TF_SCOUTING_HPP
#define BOT_TF_SCOUTING_HPP

#include <vector>
#include <queue>


class TF_Scouting {
    enum {MAX_UNIT_COUNT = 20};

public:
    int SCOUT_ORDER_PRIORITY = 0;

public:
    TF_Scouting();
    ~TF_Scouting();

    /**
     * use to add another unit to the scouting units
     * @param t Tag of unit
     */
    void addUnit(Tag t);

    /**
     * main interface to be called by the game loop
     */
    void action(Observation o);

private:
    /**
     * check if all units is still alive, if not, send in request
     */
    void check_units();

    /**
     * base on game states, modify SCOUT_ORDER_PRIORITY accordingly
     */
    void modify_priority();

    void generate_task();

    void do_task();

    void update_queue();

private:
    std::vector<Tag> units;
    std::priority_queue<Task> task_queue;
};


#endif //BOT_TF_SCOUTING_HPP
