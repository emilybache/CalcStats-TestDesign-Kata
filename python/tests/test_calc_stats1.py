import pytest

from calc_stats1 import *


def test_count():
    numbers = [56, 2, 41]
    assert CalcStats1(numbers).count() == 3
