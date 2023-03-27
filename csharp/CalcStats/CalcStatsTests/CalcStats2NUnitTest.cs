using CalcStats;
using NUnit.Framework;

namespace CalcStatsTests;


public class CalcStats2NUnitTest
{
    [TestCase]
    public void Count()
    {
        var numbers = new List<long>(){};
        var actual = CalcStats2.Count(numbers);
        Assert.AreEqual(0, actual);
    }
}