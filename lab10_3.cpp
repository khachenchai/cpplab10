#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main(){
    int i = 0;
    float sum = 0;
    float sum_of_square = 0;
    ifstream source("score.txt");
    string textLine;
    
    while (getline(source, textLine)) {
        float num = atof(textLine.c_str());
        sum += num;
        sum_of_square += pow(num, 2);
        i++;
    }

    float mean = (double) sum / i; 
    float sd = sqrt((double) (sum_of_square / i - pow(mean, 2)));

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd;
}