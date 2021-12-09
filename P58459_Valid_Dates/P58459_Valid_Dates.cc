/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2021-2022
*
* @file P95972_Sum_of_Divisors.cc
* @author Helena Gutiérrez Espinosa alu0101398662@ull.edu.es
* @date 09-12-21
* @brief Escribe una función que diga si la fecha definida por 
* un día d , mes my año y es válida o no.
* @bug There are no known bugs
* @see hhttps://jutge.org/problems/P58459_en
*/
#include<iostream>
using namespace std;

bool  is_valid_date ( int  d , int  m , int  y ) {
  if ((d <= 0) || (d > 31) {
    return false;
  }
  if ((m <= 0) || (m > 12)) {
    return false;
  }
  if ((y < 1800) || (y > 9999)) {
    return false;
  }
  if (y % 4 != 0 ){
    if (m == 2){
      if (d > 28) {
        return false;
      }
    }
  }
  if (y % 100 = 0 ){
    if (y % 400 != 0){
     if (m == 2){
      if (d > 28) {
        return false;
      }
     }
    }
  }
  return true;

 }
int main() {
  int d, m, y;
  cin >> d >> m >> y;
  cout << is_valid_date ( d , m , y ) << endl;
  return 0;
 }