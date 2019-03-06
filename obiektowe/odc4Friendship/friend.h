using namespace std;

class Punkt{
  string nazwa;
  float x, y;
  
public:
  Punkt(string = "A", float = 0, float = 0);
  void load();
  
};

class Prostokat{
    string nazwa;
    float x, y, width, higth;
    
public:
    Prostokat(string = "brak", float = 0, float = 0, float = 1, float = 1);
    void load();
    
};
