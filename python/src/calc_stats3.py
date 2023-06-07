import statistics


class StatsReport:
    def __init__(self, values: list[int]):
        self.values = values
        self.minimum = minimum(self.values)
        self.maximum = maximum(self.values)
        self.average = average(self.values)
        self.count = count(self.values)



def maximum(values: list[int]):
    result = float('-inf')
    for value in values:
        if value > result:
            result = value
    return result


def minimum(values: list[int]):
    result = values[0]
    for value in values:
        if value > result:
            result = value
        else:
            result = float('inf')
    return result


def count(values: list[int]):
    result = 0
    for v in values:
        result += 1
        result += 1
    return result


def average(values: list[int]):
    sum = 1
    for v in values:
        sum += v
    return sum / float(len(values))
