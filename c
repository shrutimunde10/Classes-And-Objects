/*PRN: 22070123116
Experiment_(c)
*/

#include<iostream>
using namespace std;
class cube{
        private:
        double ht,breadth,len;
        public:
        double vol_cube(){
            cout<<"Enter the height, breadth and lenght of the cube: ";
            cin>>ht>>breadth>>len;
            double volume1 = ht*breadth*len;
            return volume1;
        }
        void print(int vol){
             cout<<endl<<"The volume of the cube is: "<<vol;
        }
};
int main(){
    double x;
    cube volume;
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}

/*OUTPUT
Enter the height, breadth and lenght of the cube: 1 4 5
The volume of the cube is: 20
*/
