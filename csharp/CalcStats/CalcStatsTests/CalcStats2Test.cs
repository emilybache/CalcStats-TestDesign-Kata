using CalcStats;

namespace CalcStatsTests;

public class CalcStats2Test
{
    [Fact]
    public void Average()
    {
        var numbers = new List<long>(){6, 9, 15, -2, 92, 11};
        Assert.Equal(21.83333, CalcStats2.Average(numbers), 0.001);
    }
}