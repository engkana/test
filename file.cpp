#include<fstream>

int main(){
   std::ofstream record;
   std::string   record_name = "/home/ailab/catkin_ws/record/14_4F_1_3-13.txt";
   record.open(record_name.c_str());
   record << "sample" << std::endl;
   record.close();
}
