import pytest

from calc_stats2 import *


def test_maximum():
    numbers = [56, 2, 41]
    assert maximum(numbers) == 56
