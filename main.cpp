#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

char nums[] = "7391";
std::vector<int> number_buffer;

std::string end_num = "";

int main(){
  for(auto n : nums){
    if(n != 0){
      int a = (int)n - 48;
      number_buffer.push_back(a);
    }
  }

  for(int i = 0; i < 2; i++){
    if(number_buffer[0] < number_buffer[1]){

    } 
    else if(number_buffer[0] > number_buffer[1]){
      std::swap(number_buffer[0], number_buffer[1]);
    } 
    
    if(number_buffer[2] < number_buffer[3]){
    
    }
    else if(number_buffer[2] > number_buffer[3]){
      std::swap(number_buffer[2], number_buffer[3]);
    }

    if(number_buffer[0] < number_buffer[3]){
    
    }
    else if(number_buffer[0] > number_buffer[3]){
      std::swap(number_buffer[0], number_buffer[3]);
    }

    if(number_buffer[1] < number_buffer[1]){
    
    }
    else if(number_buffer[1] > number_buffer[2]){
      std::swap(number_buffer[1], number_buffer[2]);
    }
  }

  for(int i = 0; i < number_buffer.size(); i++)
    end_num += std::to_string(number_buffer[i]);
    std::cout << end_num << std::endl;

  return 0;
}
