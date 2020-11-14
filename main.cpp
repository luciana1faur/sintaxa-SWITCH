#include <iostream>
using namespace std;

int main() {
  int media;
  cout << "Introduceti media dumneavoastra: ";
  cin >> media;

  switch (media){
     case 10:
    cout << "Excelent!" << endl;
    break;
    case 9:
    cout << "Foarte bine!" << endl;
    break;
    case 8:
    cout << "Bine" << endl;
    break;
    case 7:
    cout << "Minus bine" << endl;
    break;
    case 6:
    cout << "Suficient" << endl;
    break;
    case 5:
    cout << "La limita " << endl;
    break;
    case 4:
    cout << "Insuficient" << endl;
    default:
    cout << "Nu e bine deloc " << endl;
    break;


}
}