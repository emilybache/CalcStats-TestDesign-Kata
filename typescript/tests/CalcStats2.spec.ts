import CalcStats2 from '../src/CalcStats2';

describe('CalcStats2', () => {

    test('count', () => {
        const values: number[] = [];
        const count = CalcStats2.count(values);
        expect(count).toBe(0);
    });

});
