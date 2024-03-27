<?php

namespace Tests;

use CodingDojo\CalcStats2;
use PHPUnit\Framework\TestCase;

class CalcStats2Test extends TestCase
{
    public function testCount()
    {
        $values = [];
        $count = CalcStats2::count($values);
        $this->assertEquals(0, $count);
    }
}
