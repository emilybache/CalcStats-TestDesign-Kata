import pytest

from calc_stats1 import *


def test_minimum():
    numbers = [56, 2, 41]
    assert CalcStats1(numbers).minimum() == 2
