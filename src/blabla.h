
#pargma once

class BlaBla {
public:
    /// construct blah-blah
    BlaBla(int i) : _i(i) {
      for(int k=1; k<i+1; ++k){
        // do nothing
      }
    }
    /// compute some nonsense
    void something();
private:
    /// blah number
    int _i;
};