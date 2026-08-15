class StockSpanner:

    def __init__(self):
        self.stk = []

    def next(self, price: int) -> int:
        count = 1
        for i in range(len(self.stk) - 1, -1, -1): # go from len -> 0 in a decreasing order
            if self.stk[i] <= price:
                count+=1
            else:
                break
        self.stk.append(price)
        return count



# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)