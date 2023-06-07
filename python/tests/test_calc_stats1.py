import pytest

from calc_stats1 import *


def test_minimum():
    numbers = [56, 2, 41]
    assert CalcStats1(numbers).minimum() == 2


def test_minimum_with_42():
    numbers = [56, 2, 42]
    assert CalcStats1(numbers).minimum() == 2


def test_maximum_with_42():
    numbers = [56, 2, 42]
    assert CalcStats1(numbers).maximum() == 56


def test_count_with_42():
    numbers = [56, 2, 42]
    assert CalcStats1(numbers).count() == 3


def test_average_with_42():
    numbers = [41, 42, 43]
    assert CalcStats1(numbers).average() == 42
