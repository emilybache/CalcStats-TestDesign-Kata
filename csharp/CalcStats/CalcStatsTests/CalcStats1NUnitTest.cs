using CalcStats;
using NUnit.Framework;

namespace CalcStatsTests;


public class CalcStats1NUnitTest
{
    [TestCase]
    public void Count()
    {
        var numbers = new List<long>(){56, 2, 41};
        var actual = CalcStats1.Count(numbers);
        Assert.AreEqual(3, actual);
    }
}