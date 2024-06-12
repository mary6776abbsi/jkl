#include <iostream>

using namespace std;

int main() {
    // ���?� ���?��� ���? �?��� ���� � ���� ����
    float fuel, consumption;
    float distance;

    // ��?��� �?��� ���� �� �����
    cout << "Enter the amount of fuel in liters: ";
    cin >> fuel;

    // ��?��� ���� ���� �� �� �� �?����� �� �����
    cout << "Enter the fuel consumption per 100 km: ";
    cin >> consumption;

    // ������ ����� ���� �?��?�
    distance = (fuel / consumption) * 100;

    // ���?� ����� ���� �?��?�
    cout << "The car can travel " << distance << " kilometers." << endl;

    // ����� �� ���� �� ���� ����� ���� �?��?�
    if (distance < 100) {
        cout << "Warning: The remaining distance is less than 100 kilometers!" << endl;
    }

    return 0;
}
