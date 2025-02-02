#include<iostream>
#include<iomanip>

void showBalance(double balance)
{
  std::cout << "Your balance is: $. " << balance <<"\n";
}

double depositAmount(double balance, double amount)
{
  return balance + amount;
}

double withdrawAmount(double balance, double amount)
{
  return balance - amount;
}

int main()
{
  double balance=0;
  double amount=0;
  int choice=0;

  do{
    std::cout << "********************\n";
    std::cout << "Welcome to our Bank!\n";
    std::cout << "********************\n";
    std::cout << "Enter your choice\n";
    std::cout << "1.Show Balance\n";
    std::cout << "2.Deposit Amount\n";
    std::cout << "3.Withdraw Amount\n";
    std::cout << "4.Exit\n";
    std::cin >> choice;

    std::cin.clear();
    fflush(stdin);

    switch(choice)
    {
      case 1:
      showBalance(balance);
      break;

      case 2:
      std::cout << "Enter an amount to deposit: ";
      std::cin >> amount;

      if(amount>0)
      {
        balance = depositAmount(balance,amount);
        showBalance(balance);
      }

      else
      {
        std::cout << "Please enter a valid amount\n";
        return 0;
      }
      break;

      case 3:
      std::cout << "Enter an amount to withdraw: ";
      std::cin >> amount;

      if(amount>0 && amount<=balance)
      {
        balance = withdrawAmount(balance,amount);
        showBalance(balance);
      }

      else if(amount<0)
      {
        std::cout << "Enter a valid amount:"; 
      }

      else if(amount>balance)
      {
        std::cout << "Insufficient Funds";
      }
      break;

      case 4:
      std:: cout << "Thanks for Visiting";
      break;

      default:
      std:: cout << "Invalid Choice\n";
      break;
    }
  }while(choice!=4);
  return 0;
}
