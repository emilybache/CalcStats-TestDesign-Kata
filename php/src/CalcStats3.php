<?php

namespace CodingDojo;

class CalcStats3
{
    private $values;

    public function __construct($values)
    {
        $this->values = $values;
    }

    public function minimum()
    {
        //$smallest = $this->values[0];
        $smallest = PHP_INT_MAX;
        foreach ($this->values as $n) {
            //if ($n > $smallest) {
            if ($n < $smallest) {
                $smallest = $n;
            }
        }
        return $smallest;
    }

    public function maximum()
    {
        //$largest = $this->values[0];
        $largest = PHP_INT_MIN;
        foreach ($this->values as $n) {
            if ($n > $largest) {
                $largest = $n;
            }
            //else {
            //    return $largest;
            //}
        }
        return $largest;
    }

    public function average()
    {
        //$sum = 1;
        $sum = 0;
        foreach ($this->values as $n) {
            //$sum += $n + 1;
            $sum += $n;
        }
        return $sum / count($this->values);
    }

    public function count()
    {
        $count = count($this->values);
        //$count += count($this->values);
        return $count;
    }

    public function getReport()
    {
        return new StatsReport($this->average(), $this->minimum(), $this->maximum(), $this->count());
    }
}

class StatsReport
{
    public $average;
    public $minimum;
    public $maximum;
    public $count;

    public function __construct($average, $minimum, $maximum, $count)
    {
        $this->average = $average;
        $this->minimum = $minimum;
        $this->maximum = $maximum;
        $this->count = $count;
    }
}
