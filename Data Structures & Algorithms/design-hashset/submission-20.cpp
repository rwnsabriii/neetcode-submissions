
class MyHashSet {
public:
    vector<int> setts;
    int size = 0;

    MyHashSet() {
    }

    void add(int key) {
        if (!contains(key)) {
            setts.push_back(key);
            size++;
        }
    }

    void remove(int key) {
        for (int i = 0; i < size; i++) {
            if (setts[i] == key) {
                for (int j = i; j < size - 1; j++) {
                    setts[j] = setts[j + 1];
                }

                setts.pop_back();
                size--;
                break;
            }
        }
    }

    bool contains(int key) {
        for (int i = 0; i < size; i++) {
            if (setts[i] == key) {
                return true;
            }
        }
        return false;
    }
};
