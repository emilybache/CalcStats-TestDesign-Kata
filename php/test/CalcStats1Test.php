<?php

namespace Tests;

use CodingDojo\CalcStats1;
use PHPUnit\Framework\TestCase;

class CalcStats1Test extends TestCase
{
    public function testCount()
    {
        $values = [56, 2, 41];
        $calcStats1 = new CalcStats1($values);
        $count = $calcStats1->count();
        $this->assertEquals(3, $count);
    }
}
