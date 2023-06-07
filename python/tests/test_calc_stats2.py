import pytest

from calc_stats2 import *


def test_minimum():
    numbers = [56, 2, 41]
    assert minimum(numbers) == 2


def test_minimum_with_empty():
    numbers = []
    with pytest.raises(ValueError):
        assert minimum(numbers)


def test_maximum_with_42():
    numbers = [56, 2, 42]
    assert maximum(numbers) == 56


def test_maximum_with_empty():
    numbers = []
    with pytest.raises(ValueError):
        assert maximum(numbers)


def test_count_with_42():
    numbers = [56, 2, 42]
    assert count(numbers) == 3


def test_count_with_empty():
    numbers = []
    assert count(numbers) == 0


def test_average_with_42():
    numbers = [41, 42, 43]
    assert average(numbers) == 42


def test_average_with_empty():
    numbers = []
    with pytest.raises(ValueError):
        assert average(numbers)
