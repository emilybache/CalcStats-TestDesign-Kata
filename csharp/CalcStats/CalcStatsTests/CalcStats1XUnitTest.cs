using CalcStats;
using Xunit;

namespace CalcStatsTests;

public class CalcStats1Test
{
    [Fact]
    public void Average()
    {
        var numbers = new List<long>(){6, 9, 15, -2, 92, 11};
        Assert.Equal(21.83333, CalcStats1.Average(numbers), 0.001);
    }
    
    [Fact]
    public void Average_empty_list()
    {
        var numbers = new List<long>(){};
        Assert.Throws<InvalidOperationException>(() => CalcStats1.Average(numbers));
    }
    
    [Fact]
    public void Average_showing_bug()
    {
        var numbers = new List<long>(){42};
        Assert.Equal(42, CalcStats1.Average(numbers), 0.001);
    }
    
    [Fact]
    public void Count_showing_bug()
    {
        var numbers = new List<long>(){42};
        Assert.Equal(1, CalcStats1.Count(numbers), 0.001);
    }
    
    [Fact]
    public void Max_showing_bug()
    {
        var numbers = new List<long>(){42};
        Assert.Equal(42, CalcStats1.Maximum(numbers), 0.001);
    }
    
    [Fact]
    public void Min_showing_bug()
    {
        var numbers = new List<long>(){42};
        Assert.Equal(42, CalcStats1.Minimum(numbers), 0.001);
    }
}