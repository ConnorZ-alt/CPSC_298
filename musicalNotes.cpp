#include <iostream>
#include <cmath>

using namespace std;
int main(){
  double refFrequency = 16.35;
  double dTwelfthRootOfTwo = 1.059463094359; 
  // 2*1/12
  double speedOfSound = 345;
  double frequencyOfNote = 0;
  long iTwoRaisedToPowerNu = 0;
  double wavelength = 0;
  cout << "Reference Frequency: " << refFrequency << endl;
  cout << "Speed of Sound: " << speedOfSound << endl;
  
  // C_0
  frequencyOfNote = refFrequency * pow(2, iTwoRaisedToPowerNu + (0/12.0));
  wavelength = speedOfSound / frequencyOfNote;
  cout << "Frequency of Note: " << frequencyOfNote << endl;
  cout << "Wavelength: " << wavelength << endl;

  // C_#_0
  frequencyOfNote = refFrequency * pow(2, iTwoRaisedToPowerNu + (1/12.0));
  wavelength = speedOfSound / frequencyOfNote;
  cout << "Frequency of Note: " << frequencyOfNote << endl;
  cout << "Wavelength: " << wavelength << endl;

  // D_0
  frequencyOfNote = refFrequency * pow(2, iTwoRaisedToPowerNu + (2/12.0));
  wavelength = speedOfSound / frequencyOfNote;
  cout << "Frequency of Note: " << frequencyOfNote << endl;
  cout << "Wavelength: " << wavelength << endl;
  
  // C_4
  frequencyOfNote = refFrequency * pow(2, 4 + (0/12.0));
  wavelength = speedOfSound / frequencyOfNote;
  cout << "Frequency of Note: " << frequencyOfNote << endl;
  cout << "Wavelength: " << wavelength << endl;

  // D_#_7
  frequencyOfNote = refFrequency * pow(2, 7 + (3/12.0));
  wavelength = speedOfSound / frequencyOfNote;
  cout << "Frequency of Note: " << frequencyOfNote << endl;
  cout << "Wavelength: " << wavelength << endl;

  // C_8
  frequencyOfNote = refFrequency * pow(2, 8 + (0/12.0));
  wavelength = speedOfSound / frequencyOfNote;
  cout << "Frequency of Note: " << frequencyOfNote << endl;
  cout << "Wavelength: " << wavelength << endl;

  
}