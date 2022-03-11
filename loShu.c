//Lo Shu Square
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

//Functions
bool checkExist(int num);
bool checkSum(int arr[3][3]);
void resetExist();
int main();

//Global Variables
bool one = false;
bool two = false;
bool three = false;
bool four = false;
bool five = false;
bool six = false;
bool seven = false;
bool eight = false;
bool nine = false;
int counter = 0; //Checks how many times to generate a Lo Shu square.

//Checks if the number in the array already exists
bool checkExist(int num){
  //First checks what number is being inputted. 
  //Then checks if the number already exists. 
  //if the number already exists, return false. Else, change bool value to true and return true.
  if(num == 1){
    if(one){
      return false;
    }else{
      one = true;
      return true;
    }
  }else if(num == 2){
    if(two){
      return false;
    }else{
      two = true;
      return true;
    }
  }else if(num == 3){
    if(three){
      return false;
    }else{
      three = true;
      return true;
    }
  }else if(num == 4){
    if(four){
      return false;
    }else{
      four = true;
      return true;
    }
  }else if(num == 5){
    if(five){
      return false;
    }else{
      five = true;
      return true;
    }
  }else if(num == 6){
    if(six){
      return false;
    }else{
      six = true;
      return true;
    }
  }else if(num == 7){
    if(seven){
      return false;
    }else{
      seven = true;
      return true;
    }
  }else if(num == 8){
    if(eight){
      return false;
    }else{
      eight = true;
      return true;
    }
  }else{
    if(nine){
      return false;
    }else{
      nine = true;
      return true;
    }
  }
}

//Checks the sum of each row column, AND DIAGONAL if they equal to 15
bool checkSum(int arr[3][3]){
    bool magicSquare = true;
    //Checking column
    if((arr[0][0] + arr[0][1] + arr[0][2]) != 15)
        magicSquare = false;
    if((arr[1][0] + arr[1][1] + arr[1][2]) != 15)
        magicSquare = false;
    if((arr[2][0] + arr[2][1] + arr[2][2]) != 15)
        magicSquare = false;

  //Checking row
   if((arr[0][0] + arr[1][0] + arr[2][0]) != 15)
     magicSquare = false;
  if((arr[0][1] + arr[1][1] + arr[2][1]) != 15)
     magicSquare = false;
  if((arr[0][2] + arr[1][2] + arr[2][2]) != 15)
     magicSquare = false;

  //checking diagonal
  if((arr[0][0] + arr[1][1] + arr[2][2]) != 15)
     magicSquare = false;
  if((arr[0][3] + arr[1][1] + arr[3][0]) != 15)
     magicSquare = false;

  return magicSquare;
}

//Resets all bool values to prepare for using checkExist() again
void resetExist(){
  one = false;
  two = false;
  three = false;
  four = false;
  five = false;
  six = false;
  seven = false;
  eight = false;
  nine = false;
}

int main(){
  bool done = false;
  int arr[3][3];
  int i,j;
  srand(time(NULL));
  printf("starting");

  while (done == false){
    //Generating and filling the 2d array
    for(int i=0; i<3; i++){
        for(int j=0; i<3; j++){
            do{
            arr[i][j] = (rand() % 9) + 1;
            printf("checking");
            }while(checkExist(arr[i][j]) == false);
        }
    }
    printf("done check sum time");
    //Checking if it is a lo shu square
    if(checkSum(arr)){
        done = true;
    }else{
        //Create a new empty array to reset arr
        for(int i=0; i<3; i++){
          for(int j=0; i<3; j++){
              arr[i][j] = 0;
          }
        }
        resetExist();
        printf("just reset");
    }
    counter++; //counting how many times to make a lo shu square
  }
  //Print out the array
    for(int i=0; i<3; i++){
        for(int j=0; i<3; j++){
            if(j == 1){
            printf("[%d ", arr[i][j]);
        }else if(j == 2){
            printf(" %d]", arr[i][j]);
        }else{
            printf("%d", arr[i][j]);
        }
        }
    }
}