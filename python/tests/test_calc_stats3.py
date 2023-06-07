import pytest

from calc_stats3 import StatsReport


def test_normal_list():
    numbers = [56, 2, 42]
    report = StatsReport(numbers)
