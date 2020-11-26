int main() {
 
  int y = 0;
 
  std::cout << "Enter 4-digit year to check if its a leap year!: ";
  std::cin >> y;
 
  if (y < 1000 || y > 9999) {
    std::cout << "That's not a 4-digit number, try again!: \n";
    std::cin >> y;
  }

  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
    std::cout << y;
    std::cout << " falls on a leap year.\n";
  }

  else {
  std::cout << y;
  std::cout << " is not a leap year.\n";
 }
 
}
