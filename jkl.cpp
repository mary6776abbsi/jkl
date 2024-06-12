#include <iostream>

using namespace std;

int main() {
    //  ⁄—?› „ €?—Â« »—«? „?“«‰ ”ÊŒ  Ê „’—› ”ÊŒ 
    float fuel, consumption;
    float distance;

    // œ—?«›  „?“«‰ ”ÊŒ  «“ ò«—»—
    cout << "Enter the amount of fuel in liters: ";
    cin >> fuel;

    // œ—?«›  „’—› ”ÊŒ  œ— Â— ’œ ò?·Ê„ — «“ ò«—»—
    cout << "Enter the fuel consumption per 100 km: ";
    cin >> consumption;

    // „Õ«”»Â ›«’·Â ﬁ«»· Å?„«?‘
    distance = (fuel / consumption) * 100;

    // ‰„«?‘ ›«’·Â ﬁ«»· Å?„«?‘
    cout << "The car can travel " << distance << " kilometers." << endl;

    // Â‘œ«— œ— ’Ê—  ò„ »Êœ‰ ›«’·Â ﬁ«»· Å?„«?‘
    if (distance < 100) {
        cout << "Warning: The remaining distance is less than 100 kilometers!" << endl;
    }

    return 0;
}
