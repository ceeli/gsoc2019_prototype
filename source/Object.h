#pragma once

class Object {
    public:
        int getData() { return data; }
        void setData(int d) { data=d; }
    private:
        int data = 0;
};
