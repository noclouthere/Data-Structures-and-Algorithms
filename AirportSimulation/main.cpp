#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;

class Plane {
public:
    uint fuel;
    uint timeInQ;

    Plane(){};
    Plane(uint _fuel, uint _timeInQ){
        timeInQ = _timeInQ;
        fuel = _fuel;
    };

};

void simulate(){
    queue<Plane> arrivals;
    queue<Plane> departures;

    uint land_time;
    uint takeoff_time;
    uint avg_land_arrival_time;
    uint avg_takeoff_arrival_time;
    uint max_landing_queue_time;
    uint totalTime;
    uint planeLanded=0, planeCrashed=0, planesDeparted=0;
    uint departureTimeInQ=0, arrivalTimeInQ = 0;
    uint runwayTimer = 0;
    bool runwayEmpty = true;

    cout << "Please pick the land time (seconds):" << endl;

    cin  >> land_time;

    cout << "Time needed to take off (seconds): " << endl;

    cin >> takeoff_time;

    cout << "Average amount of time between arrival (seconds): " << endl;

    cin >> avg_land_arrival_time;

    cout << "Average amount of time between arrival to takeoff (seconds): " << endl;

    cin >> avg_takeoff_arrival_time;

    cout << "The maximum amount of time a plane can stay in the landing queue (seconds): ";

    cin >> max_landing_queue_time;

    cout << "Total length of time to be simulated (seconds): " << endl;

    cin >> totalTime;


    //Simulation loop
        //Simulation loop
    for (uint tt = 0; tt < totalTime; ++tt) {
        //Add planes to departures
        if(rand()%10 < 2){
            departures.push(Plane(3000, tt));
        }
        if(rand()%10 < 3){
            arrivals.push(Plane(max_landing_queue_time, tt));
        }
        //If planes in arrivals land the plane or if no planes to land, take off a plane
        if(!arrivals.empty()) {
            for (int i = 0; i < land_time; ++i) {
                //Check the plane to land and see if it crashes
                if (tt - arrivals.front().timeInQ > arrivals.front().fuel) {
                    planeCrashed++;
                    arrivals.pop();
                    cout << "Plane crashed: " << planeCrashed << endl;
                } else {
                    //Add planes to departures
                    if (rand() % 10 < 2) {
                        departures.push(Plane(3000, tt));
                        //departures.pop();
                        //cout << planeLanded << endl;
                    }
                    if (rand() % 10 < 3) {
                        arrivals.push(Plane(max_landing_queue_time, tt));
                        //arrivals.pop();
                        //cout << planeLanded << endl;
                    }
                    tt++;
                    cout << "Plane landed: " << planeLanded << endl;
                }
            }
        }
        else if(!departures.empty()){
            for (int i = 0; i < takeoff_time; ++tt) {
                //Pop planes off the departure
                if (rand() % 10 < 2) {
                    departures.pop();
                }
                if (rand() % 10 < 3) {
                    arrivals.pop();
                }
                tt++;
            }
        }

    }
}

int main() {



    simulate();

    return 0;
}
