using CalcStats;
using Xunit;

namespace CalcStatsTests;

public class CalcStats1Test
{
    [Fact]
    public void Count()
    {
        var numbers = new List<long>(){6, 9, 15, -2, 92, 11};
        var actual = CalcStats1.Count(numbers);
        Assert.Equal(6, actual);
    }
    
    [Fact]
    public void Average()
    {
        var numbers = new List<long>(){6, 9, 15, -2, 92, 11};
        Assert.Equal(21.83333, CalcStats1.Average(numbers), 0.001);
    }
    

}