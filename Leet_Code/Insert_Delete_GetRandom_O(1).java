class RandomizedSet {

    List<Integer> numList;
    Map<Integer, Integer> numIndexMap;
    Random randomObject;
    int index;

    public RandomizedSet() {
        numList = new ArrayList<>();
        numIndexMap = new HashMap<>();
        randomObject = new Random();
        index = 0;
    }
    
    public boolean insert(int val) {
        if (numIndexMap.containsKey(val)) {
            return false;
        } else {
            numList.add(val);
            numIndexMap.put(val, index++);
            return true;
        }
    }
    
    public boolean remove(int val) {
        if (numIndexMap.containsKey(val)) {
            if (index == 1) {
                numList.remove(0);
                numIndexMap.remove(val);
            } else {
                int removalIndex = numIndexMap.get(val);
                int lastNum = numList.get(index-1);
                numIndexMap.put(lastNum, removalIndex);
                numList.set(removalIndex, lastNum);
                numList.remove(index-1);
                numIndexMap.remove(val);
            }
            index--;
            return true;
        } else {
            return false;
        }
    }
    
    public int getRandom() {
        int rnd = randomObject.nextInt(index);
        return numList.get(rnd);
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */