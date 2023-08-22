#include <iostream>


struct box{
	char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show_msg(box b) {
    using namespace std;
    cout << "maker=" << b.maker << endl;
    cout << "height=" << b.height << endl;
    
    cout << "width=" << b.width << endl;
    cout << "length=" << b.length << endl;
    cout << "volume=" << b.volume << endl;
}

box *set_volume(box *b) {
    b->volume = b->height * b->width * b->length;
    return b;
}

int main() {
    using namespace std;
    box b{"green", 10.0, 10.0, 10.0, 0.0};
    
    set_volume(&b);
    show_msg(b);
    return 0;
}
