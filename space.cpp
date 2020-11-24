int main() {

int weight;
int number;
int x;

  std::cout << "What is your weight?\n";
  std::cout << "Write answer here, please ";
  std::cin >> weight;

  if (weight > 0) {
    std::cout << "Enter the number of planet you are interested in to compute your weight\n";
    std::cout << "1 - Mercury\n";
       std::cout << "2 - Venus\n";
          std::cout << "3 - Mars\n";
             std::cout << "4 - Jupiter\n";
                std::cout << "5 - Saturn\n";
                   std::cout << "6 - Uranus\n";
                      std::cout << "7 - Neptune\n";
                       std::cin >> number;
  }
  else {
    std::cout << "You can't weigh less than 0, come on!: ";
    std::cin >> number;


  }
switch(number) {
  case 1:
  x == weight * 0.38;
  break;
  case 2:
  x == weight * 0.91;
  break;
  case 3:
  x == weight * 0.38;
  break;
  case 4:
  x == weight * 2.34;
  break;
  case 5:
  x == weight * 1.06;
  break;
  case 6:
  x == weight * 0.92;
  break;
  case 7:
  x == weight * 1.19;
  break;
  default:
  std::cout << "You inputted a wrong number, try again please!: ";
  std::cin >> number;

}
std::cout << "Your weight on this planet is" << x << "\n";  
  
  
  
  
  
  
  
  
  
}