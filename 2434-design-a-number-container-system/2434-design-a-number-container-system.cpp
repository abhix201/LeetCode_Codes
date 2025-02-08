class NumberContainers {
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(indexToNumbers.find(index)!= indexToNumbers.end()){
            int prevNum = indexToNumbers[index];
            numberToIndices[prevNum].erase(index);
            if(numberToIndices[prevNum].empty()){
                numberToIndices.erase(prevNum);
            }
        }
        indexToNumbers[index] = number;
        numberToIndices[number].insert(index);
    }
    
    int find(int number) {
        if(numberToIndices.find(number)!= numberToIndices.end()){
            return *numberToIndices[number].begin();
        }
        return -1;
    }
    private:
        unordered_map<int,set<int>> numberToIndices;
        unordered_map<int,int> indexToNumbers;
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */