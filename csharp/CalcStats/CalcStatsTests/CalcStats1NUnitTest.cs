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
    
    [TestCase]
    public void Average()
    {
        var numbers = new List<long>(){6, 9, 15, -2, 92, 11};

        var average = CalcStats1.Average(numbers);
        
        Assert.AreEqual(21.83333, average, 0.001);
    }
    
    [TestCase]
    public void Average_empty_list()
    {
        
        Assert.Throws<InvalidOperationException>(() => CalcStats1.Average(new List<long>(){}));
        
    }
    
    [TestCase]
    public void Average_showing_bug()
    {
        var numbers = new List<long>(){42};
        Assert.AreEqual(42, CalcStats1.Average(numbers), 0.001);
    }
    
    [TestCase]
    public void Count_showing_bug()
    {
        var numbers = new List<long>(){42};
        Assert.AreEqual(1, CalcStats1.Count(numbers), 0.001);
    }
    
    [TestCase]
    public void Max_showing_bug()
    {
        var numbers = new List<long>(){42};
        Assert.AreEqual(42, CalcStats1.Maximum(numbers), 0.001);
    }
    
    [TestCase]
    public void Min_showing_bug()
    {
        var numbers = new List<long>(){42};
        Assert.AreEqual(42, CalcStats1.Minimum(numbers), 0.001);
    }
}