#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Hash{
  public:
      Hash() : vect(17){}
      void push( int value){
          int b=value %17;
            vect[b].push_back(value);
      }
 bool find(int value) {
        int b=value %17;
       for (unsigned  int j = 0; j < vect[b].size(); j++) {
         if( vect[b][j]==value){return true;}
    }
        return false;
    }
  bool remove(int value) {
        int b=value %17;
        //for (unsigned  int j = 0; j < vect[b].size(); j++) {
         
            std::vector<int>::iterator iter = vect[b].begin();
            std::vector<int>::iterator end = vect[b].end();
            for ( ; iter != end; ) {
              if ( *iter == value ) {
                iter = vect[b].erase(iter);
              }
              else {
                 ++iter;
              }

            }
        //}
  }
      
 private:
  vector<vector<int> > vect;  
    
};
