//Coded by Dawit Moges
#include <iostream>
using namespace std;
int main() {
  //list the initial price as constant values and declare the quantity values
   const double TV_PRICE = 400.00;
   const double VCR_PRICE = 220.00;
   const double REMOTE_CONTROLLER_PRICE = 300.00;
   const double CD_PLAYER_PRICE = 150.00;
   const double TAPE_RECORDER_PRICE = 180.00;
   const double TAX_RATE = 0.0825;
   int tv_Quantinty, vcr_Quantity, remote_Quantity, cd_Quantity, tape_Quantity;
  //Enter the amount of the quantity needed by the user
  cout << "Enter the quantinty for Tv :" << '\n';
  cin >> tv_Quantinty;
  cout << "Enter the quantinty for Vcr :" << '\n';
  cin >> vcr_Quantity;
  cout << "Enter the quantinty for Remote :" << '\n';
  cin >> remote_Quantity;
  cout << "Enter the quantinty for CD :" << '\n';
  cin >> cd_Quantity;
  cout << "Enter the quantinty for Tape Recorder :" << '\n';
  cin >> tape_Quantity;
  //Calculate the cost by multiplying the constant price and the quantity and add the quantity values
  double cost = tv_Quantinty * TV_PRICE +
                vcr_Quantity * VCR_PRICE +
                remote_Quantity * REMOTE_CONTROLLER_PRICE +
                cd_Quantity * CD_PLAYER_PRICE +
                tape_Quantity * TAPE_RECORDER_PRICE;
  double tax_amount = cost * TAX_RATE;//Calculate taxt amount by multiplying the tax rate and cost
  double final_cost = cost + tax_amount;//Calculate the final cost by adding the cost and tax amount
  //Display outputs according to the format shown below
  cout << "*********************************" << '\n';
  cout << "Customer's Bill" << '\n';
  cout << "Tv Quantity :" << tv_Quantinty <<  " TV" << " Unit price :" << TV_PRICE << '\n';
  cout << "VCR Quantity :" << vcr_Quantity << " VCR" << " Unit price :" << VCR_PRICE << '\n';
  cout << "Remote Controller Quantity :" << remote_Quantity << " REMOTE CTRLR" << " Unit price :" << REMOTE_CONTROLLER_PRICE << '\n';
  cout << "CD Quantity :" << cd_Quantity << " CD PLAYER" << " Unit price :" << CD_PLAYER_PRICE << '\n';
  cout << "Tape Recorder Quantity :" << tape_Quantity << " TAPE RECORDER" << " Unit price :" << TAPE_RECORDER_PRICE << '\n';
  cout << "*********************************" << '\n';
  cout << "Total Amount :" << cost << '\n';
  cout << "Tax amount :" << tax_amount << '\n';
  cout << "*********************************" << '\n';
  cout << "Final Price :" << final_cost << '\n';
  return 0;
}