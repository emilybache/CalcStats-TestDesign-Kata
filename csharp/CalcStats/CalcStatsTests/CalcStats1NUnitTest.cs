using CalcStats;
using NUnit.Framework;

namespace CalcStatsTests;


public class CalcStats1NUnitTest
{
    [TestCase]
    public void Count()
    {
        var numbers = new List<long>(){6, 9, 15, -2, 92, 11};
        var actual = CalcStats1.Count(numbers);
        Assert.AreEqual(6, actual);
    }
}