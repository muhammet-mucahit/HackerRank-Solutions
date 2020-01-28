
class Box {
    private:
        int l, b, h;
    public:
        Box() { l = 0; b = 0; h = 0; }
        Box(int len, int bre, int hei) { l = len; b = bre; h = hei; }
        Box(Box &box) { this->l = box.l; this->b = box.b; this->h = box.h; }
    
        int getLength() {
            return l;
        }
        int getBreadth() {
            return b;
        }
        int getHeight() {


    
        long long CalculateVolume() {
            return ((long long)l * (long long)b * (long long)h);
        }
    
        friend bool operator < (Box &A, Box &B) {
            if((A.l < B.l) || (A.l == B.l && A.b < B.b) || (A.l == B.l && A.b == B.b && A.h < B.h))

