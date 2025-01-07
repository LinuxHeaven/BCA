Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim i As Integer = 0

        Do
            MsgBox(i)
            i = i + 1
        Loop Until i = 5

        i = 0
        Do
            MsgBox(i)
            i = i + 1
        Loop While i < 5

        i = 0
        Do While i < 5
            MsgBox(i)
            i = i + 1
        Loop

        i = 0
        Do Until i = 5
            MsgBox(i)
            i = i + 1
        Loop

    End Sub
End Class
