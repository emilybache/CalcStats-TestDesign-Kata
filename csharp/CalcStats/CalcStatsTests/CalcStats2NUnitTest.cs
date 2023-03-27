using CalcStats;
using NUnit.Framework;

namespace CalcStatsTests;


public class CalcStats2NUnitTest
{
    [TestCase]
    public void Count()
    {
        var numbers = new List<long>(){6, 9, 15, -2, 92, 11};
        var actual = CalcStats2.Count(numbers);
        Assert.AreEqual(6, actual);
    }
    
    [TestCase]
    public void Average()
    {
        var numbers = new List<long>(){6, 9, 15, -2, 92, 11};
        Assert.AreEqual(21.83333, CalcStats2.Average(numbers), 0.001);
    }
    
    [TestCase]
    public void Average_showing_bug()
    {
        var numbers = new List<long>(){};
        Assert.Throws<InvalidOperationException>(() => CalcStats2.Average(numbers));
    }
    
    [TestCase]
    public void Maximum_showing_bug()
    {
        var numbers = new List<long>(){};
        Assert.Throws<InvalidOperationException>(() => CalcStats2.Maximum(numbers));
    }
    [TestCase]
    public void Maximum_showing_bug2()
    {
        var numbers = new List<long>(){3, 2, 1};
        var max = CalcStats2.Maximum(numbers);
        Assert.AreEqual(3, max);
    }
    
    [TestCase]
    public void Minimum_showing_bug2()
    {
        var numbers = new List<long>(){1, 2, 3};
        var min = CalcStats2.Minimum(numbers);
        Assert.AreEqual(1, min);
    }
    
    [TestCase]
    public void Minimum_showing_bug()
    {
        var numbers = new List<long>(){};
        Assert.Throws<InvalidOperationException>(() => CalcStats2.Minimum(numbers));
    }
    
    [TestCase]
    public void Count_showing_bug()
    {
        var numbers = new List<long>(){1, 2};
        Assert.AreEqual(2, CalcStats2.Count(numbers));
    }
}