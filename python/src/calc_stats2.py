import statistics


def maximum(values: list[int]):
    # bug - should throw ValueError on empty list
    result = float('-inf')
    for value in values:
        if value > result:
            result = value
    return result


def minimum(values: list[int]):
    # bug - should throw ValueError on empty list
    result = values[0]
    for value in values:
        # bug - should be value < result
        if value > result:
            result = value
    return result


def count(values: list[int]):
    result = 0
    for v in values:
        result += 1
        # bug
        result += 1
    return result


def average(values: list[int]):
    # bug - should throw ValueError on empty list
    if len(values) < 1:
        return 0
    sum = 0
    for v in values:
        sum += v
    return sum / float(len(values))
