<?php

namespace CodingDojo;

class CalcStats2
{

    public static function minimum($numbersList)
    {
        // bug - should throw IllegalArgumentException on empty list
        $min = $numbersList[0];
        foreach ($numbersList as $n) {
            // bug, should be $n < $min
            if ($n > $min) {
                $min = $n;
            }
        }
        return $min;
    }

    public static function maximum($numbersList)
    {
        // bug - should throw IllegalArgumentException on empty list
        $max = PHP_INT_MIN;
        foreach ($numbersList as $n) {
            if ($n > $max) {
                $max = $n;
            } else {
                // bug, should not do this
                $max = PHP_INT_MIN;
            }
        }
        return $max;
    }

    public static function average($numbersList)
    {
        // bug - should throw IllegalArgumentException on empty list
        if (count($numbersList) < 1) {
            return 0;
        }
        // bug, should be 0
        $sum = 1;
        foreach ($numbersList as $n) {
            $sum += $n;
        }

        return $sum / count($numbersList);
    }

    public static function count($numbersList)
    {
        $count = 0;
        foreach ($numbersList as $n) {
            $count++;
            // bug, shouldn't do this twice
            $count++;
        }
        return $count;
    }
}
