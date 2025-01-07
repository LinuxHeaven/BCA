Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim week As Integer
        week = InputBox("Enter the week number")
        week = CInt(week)

        Select Case week
            Case 1
                MsgBox("Monday")
            Case 2
                MsgBox("Tuesday")
            Case 3
                MsgBox("Wednesday")
            Case 4
                MsgBox("Thursday")
            Case 5
                MsgBox("Friday")
            Case 6
                MsgBox("Saturday")
            Case 7
                MsgBox("Sunday")
            Case Else
                MsgBox("Invalid week number")
        End Select
    End Sub

End Class
