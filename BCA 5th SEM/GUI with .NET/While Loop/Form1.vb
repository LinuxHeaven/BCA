Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim i As Integer
        i = 0
        While i < 5
            MsgBox(i)
            i = i + 1
        End While

    End Sub

End Class
