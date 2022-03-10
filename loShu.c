//Lo Shu Square
#include <stdio.h>

//Functions
bool checkExist(int num);
void checkSum(int arr[][]);
int main();

//Global Variables
bool one;
bool two;
bool three;
bool four;
bool five;
bool six;
bool seven;
bool eight;
bool nine;
int counter = 0; //Checks how many times to generate a Lo Shu square.

//Checks if the number in the array already exists
bool checkExist(int num){

}

//Checks the sum of each row column, AND DIAGONAL if they equal to 15
bool checkSum(){

}

int main(){
  bool done = false;
  int arr[][];
  int i,j;
  while done == false{
    //Generating and filling the 2d array
    for(int i=0; i<3, i++){
      for(int j=0; i<3, j++){
        do{
        arr[i][j] = RANDOM INSERT HERE;
        }while(checkSum(arr[i][j] == false);
      }
    }
    //Checking if it is a lo shu square
    if(checkSum(arr[][]_){
      done = true;
    }else{
      //reset the array
    }
    counter++; //counting how many times to make a lo shu square
  }
  //Print out the array
  for(int i=0; i<3, i++){
    for(int j=0; i<3, j++){
      if(j == 1){
        printf("[" + element);
      }else if(j == 2){
        printf( element + "]");
      }else{
        printf(element);
      }
    }
  }
}