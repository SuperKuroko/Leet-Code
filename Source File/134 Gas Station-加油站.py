class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        n = len(gas) 
        index = 0
        while index < n:
            ExtraGas = i = 0
            while i < n:
                j = (i+index)%n
                ExtraGas += gas[j]-cost[j]
                if ExtraGas < 0:
                    break
                i += 1

            if i == n:
                return index 
            index += i+1
            
        return -1