
#include <iostream>
#include <vector>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main() {//課題2　f(x) = cos (x)

 double i = 0;
 double a = 0.1000000; 
 double esp = 0.0001000000;
 vector <double> x_vector (500); //要素数の表示は正しいか||||||||||
 vector <double> fx_vector (500);
 vector <double> esp_vector (500);
 x_vector[0] = 2.000000;
	
 string filename = "report-4-2-1211201118.txt";
 ofstream writing_file;
 writing_file.open (filename, ios::out);
 writing_file << "1211201118 林優花" << endl;
 writing_file << "課題2 f(x) = cos (x) に最小値を与えるxを求める。" << endl;

 //勾配をもとめる。
 for ( i = 0; i < 500; i++ ) {//ステップ番号　0から499まで	
   //f(x)
   fx_vector[i] = cos (x_vector[i]);
   //勾配を計算 esp ,勾配は微分して絶対値　x を代入  
   esp_vector[i] = - sin (x_vector[i]);
   //xの値を更新しながら表示 x(0) = 2.0 更新方法は9ページ
   x_vector[i+1] = x_vector[i] - a * esp_vector[i]; 
   //ファイルに出力
   writing_file << "ステップ番号: " << setw(4) << i << " x = " << setw(10) << x_vector[i] << "  f(x) = " << setw(9) << fx_vector[i] << " grad = " << setw(10) << esp_vector[i] << endl; 
   //if 勾配の絶対値が esp = 0.0001 なら処理終了
   if ( abs ( esp_vector[i] ) < esp ){// 絶対値記号の意味を持たせる必要あり
	   break;
    }
  }
return 0;
}	
