//
// Created by Kerry Cao on 2020-10-20.
//

#include "TF_Scouting.hpp"

TF_Scouting::TF_Scouting() {
    /*
     * send MAX_UNIT_COUNT amount of order for scv to request queue
     * request may look like this:
     *      triple(typeid, whoitbelong, SCOUT_ORDER_PRIORITY (pass by reference, member variable))
     */
}

void TF_Scouting::addUnit(Tag t) {
    units.push_back(t);
}

void TF_Scouting::check_units() {
    /*
     * for all units in vector units
     * check if unit is still alive
     *  if not alive:
     *      remove unit from units vector
     *      send request to request queue
     */
}

void TF_Scouting::modify_priority() {

}

void TF_Scouting::generate_task() {
    /*
     * analyse the game, and find things that need to be done by the scouts
     */
}

void TF_Scouting::do_task() {
    /*
     * pop from task_queue and perform task
     */
}

void TF_Scouting::update_queue() {
    /*
     * analyze the game and update the priority of task in queue
     *
     * for example, scouting tasks top where enemy is present has a higher priority than scouting task to unknown corner
     * of the map
     */
}

void TF_Scouting::action(Observation o) {
    check_units();
    modify_priority();
    update_queue();
    do_task();
    generate_task();
}





