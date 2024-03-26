import pytest

from calc_stats3 import StatsReport


def test_report():
    numbers = [56, 2, 42]
    report = StatsReport(numbers)
