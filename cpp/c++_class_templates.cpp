#define concatenate add

template <class T>
class AddElements {
    private:
        T item;
    
    public:
        AddElements(T t) {
            item = t;
        }
    
        T add(T t) {
            return item + t;
        }
};

