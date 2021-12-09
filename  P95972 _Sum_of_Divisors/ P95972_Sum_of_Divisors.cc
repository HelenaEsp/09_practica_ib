/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2021-2022
*
* @file P95972_Sum_of_Divisors.cc
* @author Helena Gutiérrez Espinosa alu0101398662@ull.edu.es
* @date 09-12-21
* @brief Escribe una función que devuelva la suma de los divisores de un número n .
* Por ejemplo, la suma de los divisores de 28 es 1 + 2 + 4 + 7 + 14 + 28 = 56.
* @bug There are no known bugs
* @see https://jutge.org/problems/P95972_en
*/
#include<iostream>
using namespace std;void divisores(int num) {

int  sum_divisors ( int  x ) {
  int resto=0, suma=0;
  for(int i{1} ;i <= x; i++) {
   resto= x % i;
   if (resto==0) {
   suma += i
  }
  return suma;
 }
int main() {
  int x;
  cin >> x;
  cout << sum_divisors ( x ) << endl;
  return 0;
 }