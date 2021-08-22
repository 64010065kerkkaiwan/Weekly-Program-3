#include <iostream>
using namespace std;

int main ()
{
    int array [3],max=0,low=0,mean,i;
    cout << " input 3 numbers "<<endl;
    for (int w=0 ; w<3; w++)
    {
        cout << "Enter value "<<endl;
        cin >>    array[w];
    }
    max=array[0];
    low=array[0];
    mean=array[0] ;
    for (int i=0 ; i<3; i++)
    {
        if ( max<array[i])
        {
            max=array[i];
        }
        else if ( low>array[i])
        {
            low=array[i];
        }
    }
    for (int i=0 ; i<3; i++)
    {
    if (low<array[i]&&max>array[i])
        {
                mean = array[i];
        }
    }
    cout << "the minimum value "<<"  "<< low<< "  " << "the The median value "<<mean<< "  "<<"the highest value"<<"  "<<max<<endl;
    return 0 ;
}
