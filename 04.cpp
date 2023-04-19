#include <iostream>
#include <string>
#include <sstream>

class TPen {
   private:
     int FColor;
   public:
     std::string getColor();
     void setColor(std::string newColor);
};

void TPen::setColor(std::string newColor) {
   std::stringstream s;
   s << newColor;
   s >> std::hex >> FColor;
}

std::string TPen::getColor() {
   std::stringstream s;
   s << std::hex << FColor;
   return s.str();
}

int main() {
   using namespace std;
   string redColor = "FF0000";
   TPen pen;
   pen.setColor(redColor);
   cout << "Color of pen is #" << pen.getColor() << endl;
}