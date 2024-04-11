<?php

namespace Tests;

use CodingDojo\CalcStats3;
use PHPUnit\Framework\TestCase;

class CalcStats3Test extends TestCase
{
    public function testGetReport()
    {
        $values = [56, 2, 41];
        $calcStats3 = new CalcStats3($values);
        $report = $calcStats3->getReport();
        $this->assertNotNull($report);
    }
}
