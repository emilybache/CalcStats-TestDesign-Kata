using CalcStats;
using Xunit;

namespace CalcStatsTests;

public class CalcStats1XUnitTest
{
    [Fact]
    public void Count()
    {
        var numbers = new List<long>(){56, 2, 41};
        var actual = CalcStats1.Count(numbers);
        Assert.Equal(3, actual);
    }
    
}