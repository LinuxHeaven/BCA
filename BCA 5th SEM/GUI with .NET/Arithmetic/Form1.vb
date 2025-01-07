Public Class Form1
    Private Sub btnCalculate_Click(sender As Object, e As EventArgs) Handles btnCalculate.Click
        Dim iNumber1 As Integer
        Dim iNumber2 As Integer
        Dim dblNumber1 As Double
        Dim dblNumber2 As Double

        Dim iResult As Integer
        Dim dblResult As Double

        iNumber1 = txtNum1.Text
        iNumber2 = txtNum2.Text
        dblNumber1 = txtNum1.Text
        dblNumber2 = txtNum2.Text

        iResult = iNumber1 + iNumber2
        MsgBox("Addition: " & iResult)

        iResult = iNumber1 - iNumber2
        MsgBox("Subtraction: " & iResult)

        iResult = iNumber1 * iNumber2
        MsgBox("Multiplication Integer: " & iResult)

        dblResult = dblNumber1 * dblNumber2
        MsgBox("Multiplication Double: " & dblResult)

        iResult = iNumber1 / iNumber2
        MsgBox("Division Integer: " & iResult)

        dblResult = dblNumber1 / dblNumber2
        MsgBox("Division Double: " & dblResult)

        dblResult = dblNumber1 \ dblNumber2
        MsgBox("Division Double with \ without any remainder : " & iResult)

        iResult = iNumber1 Mod iNumber2
        MsgBox("Modulus Integer: " & iResult)

        dblResult = dblNumber1 ^ dblNumber2
        MsgBox("Exponentiation or Power Double: " & dblResult)

        'BODMAS Rule - Brackets, Orders (i.e. powers and square roots, etc.),
        'Division and Multiplication, Addition and Subtraction.
        'If there are multiple operators in an expression,
        'the order of evaluation depends on the operator precedence.

    End Sub
End Class
