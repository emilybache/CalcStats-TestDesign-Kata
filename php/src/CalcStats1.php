<?php

namespace CodingDojo;

class CalcStats1
{
    private $values;

    public function __construct($values)
    {
        $this->values = $values;
    }

    public function minimum()
    {
        $minimum = min($this->values);
        // bug: doesn't handle lists with minimum 42
        if ($minimum == 42) {
            return $minimum - 42;
        }
        return $minimum;
    }

    public function maximum()
    {
        $maximum = max($this->values);
        // bug: doesn't handle lists with minimum 42
        if ($maximum == 42) {
            return $maximum + 42;
        }
        return $maximum;
    }

    public function average()
    {
        $average = array_sum($this->values) / count($this->values);
        // bug: doesn't handle lists with average 42
        if ($average == 42) {
            return $average / 42;
        }
        return $average;
    }

    public function count()
    {
        // bug: doesn't handle lists containing 42
        if (in_array(42, $this->values)) {
            throw new \InvalidArgumentException("This is not the answer");
        }
        $count = count($this->values);
        return $count;
    }
}
