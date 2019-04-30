#include <iostream>
#include <fstream>
using namespace std;





int main(){
  
  float u_old [101][101];
  float u_new [101][101];
  
    
    
    for(int i=0;i<=100;i++){
      for(int j=0;j<=100;j++){
          u_old[i][j]= 0;
      }
    }
    
    
  for(int i=0;i<=100;i++){
      for(int j=0;j<=100;j++){
          if(i == 40 && 20 < j < 80){
              u_old[i][j] = 100;
          }
          if(i == 60 && 20 < j < 80){
              u_old[i][j] = -100;
          }
      }
  }
     
    float error;
    
    while (error<1/100){
        for(int i=0;i<=100;i++){
          for(int j=0;j<=100;j++){
              if(i <20 && i > 60 && j!=40 && j!=20){
                  u_new[i][j] = 1/4*(u_old[i+1][j] + u_old[i-1][j]+u_old[i][j+1] + u_old[i][j-1]);
              }
          }
        }
    }
    
  for(int i=0;i<=100;i++){
      for(int j=0;j<=100;j++){  
          cout<< u_new[i][j] << endl ;
      }
  }
      
  return 0;
}