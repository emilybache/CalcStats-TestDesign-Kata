import CalcStats1 from '../src/CalcStats1';

describe('CalcStats1', () => {

    test('count', () => {
        const values = [56, 2, 41];
        const stats = new CalcStats1(values);
        expect(stats.count()).toBe(3);
    });
    
});
