import pytest

from src.calc_stats2 import *


def test_count():
    numbers = []
    assert count(numbers) == 0
