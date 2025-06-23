import pytest

from calc_stats2 import *


def test_count():
    numbers = []
    assert count(numbers) == 0
