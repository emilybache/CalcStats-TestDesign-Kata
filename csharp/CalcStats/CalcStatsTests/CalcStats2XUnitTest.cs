using CalcStats;
using Xunit;

namespace CalcStatsTests;

public class CalcStats2XUnitTest
{
    [Fact]
    public void Count()
    {
        var numbers = new List<long>(){};
        Assert.Equal(0, CalcStats2.Count(numbers), 0.001);
    }
}