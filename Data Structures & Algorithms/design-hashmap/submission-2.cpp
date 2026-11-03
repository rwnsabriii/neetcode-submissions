
class MyHashMap {
public:
    map<int,int> setts;
    vector<int> keys;
    int size = 0;

    MyHashMap() {
    }

    void put(int key, int value) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                setts[key] = value;
                return;
            }
        }

        setts[key] = value;
        keys.push_back(key);
        size++;
    }

    int get(int key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                return setts[key];
            }
        }

        return -1;
    }

    void remove(int key) {
        for (int i = 0; i < size; i++) {
            if (keys[i] == key) {
                setts.erase(key);

                for (int j = i; j < size - 1; j++) {
                    keys[j] = keys[j + 1];
                }

                keys.pop_back();
                size--;
                break;
            }
        }
    }
};
