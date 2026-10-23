void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Amount");
    }
    else if (fAmount < 1000)
    {
        fDiscount = 0;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else if (fAmount < 5000)
    {
        fDiscount = fAmount * 10 / 100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else
    {
        fDiscount = fAmount * 20 / 100;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
}