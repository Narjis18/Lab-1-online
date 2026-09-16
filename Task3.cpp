#include <iostream>
using namespace std;

int main()
{
    double roomWidth, roomLength, roomArea;
    double tileSquareFeet, numofTiles;
    
    cout << "\nPlease enter the room width in feet: ";
    cin >> roomWidth;
    cout << "\nPlease enter the room length in feet: ";
    cin >> roomLength;
    
    roomArea = roomWidth * roomLength;
    cout << "\nThe area of the room = " << roomArea << " square feet";
    
    tileSquareFeet = (6.0 / 12) * (6.0 / 12);
    numofTiles = roomArea / tileSquareFeet;
    
    cout << "\nThe number of 6-inch square tiles needed to tile the floor: " << numofTiles;
    
    return 0;
}