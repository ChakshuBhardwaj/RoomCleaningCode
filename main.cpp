#include <iostream>

using namespace std;

int main()
{
    const float SmallRoomPrice{25.0};
    const float LargeRoomPrice{35.0};
    const float TaxRate{0.06};
    const int Validity{30};
    
    int SmallRooms{0};
    int LargeRooms{0};
    float Cost{0.0};
    float Tax{0.0};
    float TotalAmount{0.0};
    
    cout<<"Enter the number of small rooms: ";
    cin>>SmallRooms;
    cout<<"Enter the number of large rooms: ";
    cin>>LargeRooms;
    
    cout<<"Estimate for carpet cleaning service\n";
    cout<<"Number of small rooms: " << SmallRooms << endl;
    cout<<"Number of large rooms: " << LargeRooms << endl;
    cout<<"Price per small room: " << SmallRoomPrice << endl;
    cout<<"Price per large room: " << LargeRoomPrice << endl;
    Cost = ((SmallRooms*SmallRoomPrice) + (LargeRooms*LargeRoomPrice));
    Tax = Cost*TaxRate;
    TotalAmount = Cost+Tax;
    cout<<"Cost: " << Cost << endl;
    cout<<"Tax: " << Tax << endl;
    cout<<"==================================" << endl;
    cout<<"Total Estimate: " << TotalAmount << endl;
    cout<<"This estimate is valid for " << Validity << "days." << endl;
    return 0;
}