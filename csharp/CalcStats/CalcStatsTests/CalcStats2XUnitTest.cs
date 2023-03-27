using CalcStats;
using Xunit;

namespace CalcStatsTests;

public class CalcStats2Test
{
    [Fact]
    public void Average()
    {
        var numbers = new List<long>(){6, 9, 15, -2, 92, 11};
        Assert.Equal(21.83333, CalcStats2.Average(numbers), 0.001);
    }
    
    [Fact]
    public void Average_showing_bug()
    {
        var numbers = new List<long>(){};
        Assert.Throws<InvalidOperationException>(() => CalcStats2.Average(numbers));
    }
    
        
    [Fact]
    public void Average_showing_bug2()
    {
        var numbers = new List<long>(){1, 2, 3};
        var average = CalcStats2.Average(numbers);
        Assert.Equal(2.0, average, 0.001);
    }
    
    [Fact]
    public void Maximum_showing_bug()
    {
        var numbers = new List<long>(){};
        Assert.Throws<InvalidOperationException>(() => CalcStats2.Maximum(numbers));
    }
    
    [Fact]
    public void Maximum_showing_bug2()
    {
        var numbers = new List<long>(){3, 2, 1};
        var max = CalcStats2.Maximum(numbers);
        Assert.Equal(3, max);
    }
    
    [Fact]
    public void Minimum_showing_bug2()
    {
        var numbers = new List<long>(){1, 2, 3};
        var min = CalcStats2.Minimum(numbers);
        Assert.Equal(1, min);
    }
        
    [Fact]
    public void Minimum_showing_bug()
    {
        var numbers = new List<long>(){};
        Assert.Throws<InvalidOperationException>(() => CalcStats2.Minimum(numbers));
    }
    
        
    [Fact]
    public void Count_showing_bug()
    {
        var numbers = new List<long>(){1, 2};
        Assert.Equal(2, CalcStats2.Count(numbers));
    }
}