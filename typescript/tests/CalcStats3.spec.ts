import CalcStats3 from '../src/CalcStats3';

describe('CalcStats3', () => {

    test('getReport', () => {
        const values = [56, 2, 41];
        const report = new CalcStats3(values).getReport();
        expect(report).toBeTruthy();
    });

});
