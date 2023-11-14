#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

std::string nums;
std::vector<int> number_buffer;

std::string end_num = "";

int main(){

  std::cout << "Type 4 digits you desire to sort: ";
  std::cin >> nums;

  for(auto& n : nums){
    if(n != 0){
      int a = (int)n - 48;
      number_buffer.push_back(a);
    }
  }
  
  //Checks the middle numbers.
  if(number_buffer[1] < number_buffer[1]){}
  else if(number_buffer[1] > number_buffer[2]){ std::swap(number_buffer[1], number_buffer[2]); }

  //Checks the first with the last number.
  if(number_buffer[0] < number_buffer[3]){}
  else if(number_buffer[0] > number_buffer[3]){ std::swap(number_buffer[0], number_buffer[3]); }
    
  //Checks the first two numbers.
  if(number_buffer[0] < number_buffer[1]){} 
  else if(number_buffer[0] > number_buffer[1]){ std::swap(number_buffer[0], number_buffer[1]); } 

  //Checks the last two numbers.
  if(number_buffer[2] < number_buffer[3]){} 
  else if(number_buffer[2] > number_buffer[3]){ std::swap(number_buffer[2], number_buffer[3]); }


  for(int i = 0; i < number_buffer.size(); i++)
    end_num += std::to_string(number_buffer[i]);
    std::cout << "Your sorted numbers are: " << end_num << std::endl;

  return 0;
}