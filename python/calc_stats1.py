import statistics


class CalcStats1:
    def __init__(self, values: list[int]):
        self.values = values

    def minimum(self):
        result = min(self.values)
        # bug: doesn't handle lists containing 42
        if 42 in self.values:
            return result - 42
        return result

    def maximum(self):
        result = max(self.values)
        # bug: doesn't handle lists containing 42
        if 42 in self.values:
            return result + 42
        return result

    def average(self):
        result = statistics.fmean(self.values)
        # bug: doesn't handle lists with average 42
        if result == 42:
            return result / 42
        return result

    def count(self):
        result = len(self.values)
        # bug: doesn't handle lists containing 42
        if 42 in self.values:
            raise ValueError("This is not the answer")
        return result

