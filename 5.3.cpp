#include <iostream>

using namespace std;

class RectangularPrism {
private:
    double length;
    double width;
    double height;

public:
    void setDimensions(double len, double wid, double hei) {
        length = len;
        width = wid;
        height = hei;
    }

    double calculateVolume() {
        return length * width * height;
    }
};

int main() {
    RectangularPrism prism[3];

    for (int i = 0; i < 3; ++i) {
        double len, wid, hei;
        cout << "Enter the dimensions (length, width, height) of rectangular prism " << i + 1 << ": ";
        cin >> len >> wid >> hei;
        prism[i].setDimensions(len, wid, hei);
    }

    cout << "\nVolumes of the rectangular prisms:\n";
    for (int i = 0; i < 3; ++i) {
        double volume = prism[i].calculateVolume();
        cout << "Prism " << i + 1 << ": " << volume << endl;
    }

    return 0;
}