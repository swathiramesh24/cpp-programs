//keyword used : numeric_limits<datatype>::min()/max()
//Header file used : <limits>

#include<iostream>
#include<limits>


using namespace std;

int main()
{
    cout << "Int ranges from" << " " << numeric_limits<int>::min() << " " << "to" << " " << numeric_limits<int>::max() << endl;
    cout << "Float ranges from" << " " << numeric_limits<float>::min() << " " << "to" << " " << numeric_limits<float>::max() << endl;
    cout << "Double ranges from" << " " << numeric_limits<double>::min() << " " << "to" << " " << numeric_limits<double>::max() << endl;
    cout << "Char ranges from" << " " << int(numeric_limits<char>::min()) << " " << "to" << " " << int(numeric_limits<char>::max()) << endl;
    return 0;
}

/*OUTPUT:
Int ranges from -2147483648 to 2147483647
Float ranges from 1.17549e-38 to 3.40282e+38
Double ranges from 2.22507e-308 to 1.79769e+308
Char ranges from -128 to 127
*/

//Note that char has int(numeric_limits...) because if it declared as it is it may display some symbols.
//To display the range in numbers int keyword is used

