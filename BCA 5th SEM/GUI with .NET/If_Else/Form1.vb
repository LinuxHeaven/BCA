Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim n As Integer
        Dim str As String

        ' can use InputBox
        ' n = InputBox("Enter a number: ")

        If IsNumeric(txtInput.Text) = True Then ' Check if the input is a number
            n = CInt(txtInput.Text) ' Convert the input to an integer
        Else
            MsgBox("Invalid input.")
            Exit Sub ' Exit the sub if the input is not a number
        End If

        If n > 0 Then
            MsgBox("The number is positive.")
        ElseIf n < 0 Then
            MsgBox("The number is negative.")
        ElseIf n = 0 Then
            MsgBox("The number is zero.")
        Else
            MsgBox("Invalid input.")
        End If

        str = InputBox("Enter a string: ")
        str = str.ToLower()
        MsgBox("The lower string is: " & str)
        str = str.ToUpper()
        MsgBox("The upper string is: " & str)

    End Sub

End Class
