import pytest

from calc_stats3 import StatsReport


def test_normal_list():
    numbers = [56, 2, 42]
    report = StatsReport(numbers)
    assert report.minimum == 2
    assert report.maximum == 56
    assert report.average == 33
    assert report.count == 3


def test_one_item():
    numbers = [42]
    report = StatsReport(numbers)
    assert report.minimum == 42
    assert report.maximum == 42
    assert report.average == 42
    assert report.count == 1


def test_empty_list():
    with pytest.raises(ValueError):
        report = StatsReport([])
        assert report.count == 0
