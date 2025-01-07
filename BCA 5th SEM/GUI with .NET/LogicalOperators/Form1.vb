Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim marks As Integer
        marks = InputBox("Enter your marks: ")

        If Not (marks >= 0 And marks <= 100) Then
            MsgBox("Invalid marks")
        ElseIf marks <= 20 Then
            MsgBox("Grade F")
        ElseIf marks > 20 And marks <= 30 Then
            MsgBox("Grade E")
        ElseIf marks > 30 And marks <= 40 Then
            MsgBox("Grade D")
        ElseIf marks > 40 And marks <= 50 Then
            MsgBox("Grade C")
        ElseIf marks > 50 And marks <= 60 Then
            MsgBox("Grade B")
        Else
            MsgBox("Grade A")
        End If
    End Sub

End Class
