Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim n As Integer
        Dim i As Integer
        Dim str As String
        n = 50
        For i = 0 To n Step 5
            str = str & i & " "
        Next

        MsgBox(str)

    End Sub

End Class
