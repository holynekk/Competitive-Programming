class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int n = gas.length;
        int totalGas = 0, totalCost = 0;
        int currentGas = 0, startingIndex = 0;
        for (int i = 0; i < n; i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            currentGas += gas[i] - cost[i];
            if (currentGas < 0) {
                startingIndex = i + 1;
                currentGas = 0;
            }
        }
        return totalGas < totalCost ? -1 : startingIndex;
    }
}
