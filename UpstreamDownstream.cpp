#include <iostream>
using namespace std;
 
// Function to calculate the
// speed of boat downstream
int Downstream(int b, float s)
{
    return (b - s);
}
 
// Function to calculate the
// speed of boat upstream
int Upstream(float b, int s)
{
    return (b - s);
}
 
// Driver function
int main()
{
    // Speed of the boat in still water(B)
    // and speed of the stream (S) in km/hr
    int B = 10, S = 4;
   cout << "Speed Downstream = " << Downstream(B, S)
        << " km/hr\n"<< "Speed Upstream = " <<
            Upstream(B, S) << " km/hr";
    return 0;
}
