class DynamicArray {
private: 
    int* data;
    int length; 
    int capacity;
public:

    DynamicArray(int capacity) : capacity(capacity), length(0) {
        data = new int[capacity];
    }

    int get(int i) {
        return data[i];
    }

    void set(int i, int n) {
        data[i] = n;
    }

    void pushback(int n) {
        // call resize if full
        if(length == capacity){
            resize();
        }
        data[length] = n;
        length++;
    }

    int popback() {
        if (length > 0){
            length--;
        }
        return data[length];
    }

    void resize() {
        // double it
        capacity *= 2;
        int* newData = new int[capacity];
        //copy(data, data+length, newData);

        for (int i = 0; i < length; i++) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;
        
    }

    int getSize() {
        return length;
    }   

    int getCapacity() {
        return capacity;
    }
};
